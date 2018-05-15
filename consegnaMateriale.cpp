#include "consegnaMateriale.h"
#include "mainMenu.h"
#include <iostream>

using namespace std;

Consegna_Materiale::Consegna_Materiale(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Consegna_Materiale)
{
    ui->setupUi(this);
    ui->lblDataUltimaRichiestaDb->setVisible(false);
    ui->cmdLinkBtnVerifica->setEnabled(false);
    ui->txtCognome->setEnabled(false);
    ui->txtNome->setEnabled(false);
    ui->txtRagioneSociale->setEnabled(false);
    ui->txtCivico->setEnabled(false);
    ui->txtVia->setEnabled(false);
    db = new DbConnect();
    db->openConnection();
    stringQuery="SELECT DESCRIZIONE FROM materiale WHERE TIPOLOGIA='SECCHIO'";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    i=1;
    ui->comboBoxSecchi->insertItem(0,"");
    while (query.next()){
        ui->comboBoxSecchi->insertItem(i,query.value(0).toString());
        i++;
    }
    db->closeConnection();
}

Consegna_Materiale::~Consegna_Materiale()
{
    delete ui;
}

void Consegna_Materiale::on_BtnMaterialeEsci_clicked()
{
    this->hide();
    MainMenu *menu = new MainMenu (this);
    menu->show();
}


void Consegna_Materiale::closeEvent (QCloseEvent *event)
{
    event->ignore();
    this->hide();
    MainMenu *menu = new MainMenu (this);
    menu->show();
}

void Consegna_Materiale::on_BtnCerca_clicked()
{
    check=false;
    ragioneSociale=ui->txtRagioneSociale->text().toStdString();
    cognome=ui->txtCognome->text().toStdString();
    nome=ui->txtNome->text().toStdString();
    via=ui->txtVia->text().toStdString();
    civico=ui->txtCivico->text().toStdString();
    db = new DbConnect();
    db->openConnection();
    if (!ragioneSociale.empty() && cognome.empty() && nome.empty() && !via.empty() && !civico.empty()){
        stringQuery="SELECT RAGIONE_SOCIALE,VIA,N_CIVICO FROM cliente WHERE TIPOLOGIA='AZIENDA' AND RAGIONE_SOCIALE='"+ragioneSociale+"' AND VIA='"+via+"' AND N_CIVICO='"+civico+"'";
    }else if (ragioneSociale.empty() && !cognome.empty() && !nome.empty() && !via.empty() && !civico.empty()){
        stringQuery="SELECT COGNOME,NOME,VIA,N_CIVICO FROM cliente WHERE TIPOLOGIA='PRIVATO' AND COGNOME='"+cognome+"' AND NOME='"+nome+"' AND VIA='"+via+"' AND N_CIVICO='"+civico+"'";
    }else if (ragioneSociale.empty() && !cognome.empty() && nome.empty() && via.empty() && civico.empty()){
        stringQuery="SELECT COGNOME,NOME,VIA,N_CIVICO FROM cliente WHERE TIPOLOGIA='PRIVATO' AND COGNOME='"+cognome+"'";
    }else if (!ragioneSociale.empty() && cognome.empty() && nome.empty() && via.empty() && civico.empty()){
        stringQuery="SELECT RAGIONE_SOCIALE,VIA,N_CIVICO FROM cliente WHERE TIPOLOGIA='AZIENDA' AND RAGIONE_SOCIALE='"+ragioneSociale+"'";
    }else if (ragioneSociale.empty() && !cognome.empty() && !nome.empty() && via.empty() && civico.empty()){
        stringQuery="SELECT COGNOME,NOME,VIA,N_CIVICO FROM cliente WHERE TIPOLOGIA='PRIVATO' AND COGNOME='"+cognome+"' AND NOME='"+nome+"'";
    }else if (ragioneSociale.empty() && cognome.empty() && nome.empty() && !via.empty() && !civico.empty()){
        check=true;
        stringQuery="SELECT TIPOLOGIA,RAGIONE_SOCIALE,COGNOME,NOME,VIA,N_CIVICO FROM cliente WHERE VIA='"+via+"' AND N_CIVICO='"+civico+"'";
    }else if (ragioneSociale.empty() && cognome.empty() && nome.empty() && !via.empty() && civico.empty()){
        check=true;
        stringQuery="SELECT TIPOLOGIA,RAGIONE_SOCIALE,COGNOME,NOME,VIA,N_CIVICO FROM cliente WHERE VIA='"+via+"'";
    }else if (ragioneSociale.empty() && cognome.empty() && !nome.empty() && via.empty() && civico.empty()){
        error.information(0,"Attenzione!","Non è possibile eseguire la ricerca per nome!");
    }else if (ragioneSociale.empty() && cognome.empty() && nome.empty() && via.empty() && !civico.empty()){
        error.information(0,"Attenzione!","Non è possibile eseguire la ricerca per numero civico!");
    }else if (ragioneSociale.empty() && cognome.empty() && nome.empty() && via.empty() && civico.empty()){
        error.information(0,"Attenzione!","Inserire almeno uno dei seguenti campi:\n"
                                          "-Ragione Sociale\n"
                                          "-Cognome\n"
                                          "-Via");
    }
    query = db->executeQuery(QString::fromStdString(stringQuery));

    if (query.size()==0){
        error.information(0,"Cittadino non trovato","Il cittadino non risulta nell'elenco anagrafico!");
    }else{
        model=new QSqlQueryModel();
        model->setQuery(query);
        if (ui->rBtnPrivato->isChecked() && check==false){
            model->setHeaderData(0,Qt::Horizontal,"COGNOME");
            model->setHeaderData(1,Qt::Horizontal,"NOME");
            model->setHeaderData(2,Qt::Horizontal,"VIA");
            model->setHeaderData(3,Qt::Horizontal,"NUMERO CIVICO");
        }else if (ui->rBtnAzienda->isChecked() && check==false){
            model->setHeaderData(0,Qt::Horizontal,"RAGIONE SOCIALE");
            model->setHeaderData(1,Qt::Horizontal,"VIA");
            model->setHeaderData(2,Qt::Horizontal,"NUMERO CIVICO");
        }else if (check==true){
            model->setHeaderData(0,Qt::Horizontal,"TIPOLOGIA");
            model->setHeaderData(1,Qt::Horizontal,"RAGIONE SOCIALE");
            model->setHeaderData(2,Qt::Horizontal,"COGNOME");
            model->setHeaderData(3,Qt::Horizontal,"NOME");
            model->setHeaderData(4,Qt::Horizontal,"VIA");
            model->setHeaderData(5,Qt::Horizontal,"NUMERO CIVICO");
        }
        ui->tblRicerca->setModel(model);
        ui->tblRicerca->resizeColumnsToContents();
        ui->cmdLinkBtnVerifica->setEnabled(true);
        }

    db->closeConnection();

}

void Consegna_Materiale::on_rBtnPrivato_clicked()
{
    ui->txtRagioneSociale->setEnabled(false);
    ui->txtCognome->setEnabled(true);
    ui->txtNome->setEnabled(true);
    ui->txtCivico->setEnabled(true);
    ui->txtVia->setEnabled(true);
    ui->grpMastelli->setEnabled(true);
    ui->grpSecchi->setEnabled(false);
}

void Consegna_Materiale::on_rBtnAzienda_clicked()
{
    ui->txtCognome->setEnabled(false);
    ui->txtNome->setEnabled(false);
    ui->txtRagioneSociale->setEnabled(true);
    ui->txtCivico->setEnabled(true);
    ui->txtVia->setEnabled(true);
    ui->grpMastelli->setEnabled(false);
    ui->grpSecchi->setEnabled(true);
}

void Consegna_Materiale::on_BtnElenco_clicked()
{
    ElencoTari *elencoTari = new ElencoTari(this);
    elencoTari->show();
}

void Consegna_Materiale::on_cmdLinkBtnVerifica_clicked()
{
    if (ui->tblRicerca->selectionModel()->selectedRows().count()>1){
        error.information(0,"Attenzione","Devi selezionare una sola riga per procedere!");
    }else if (ui->rBtnPrivato->isChecked() && check==false){
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),0,QModelIndex());
        cognome = ui->tblRicerca->model()->data(index).toString().toStdString();
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),1,QModelIndex());
        nome = ui->tblRicerca->model()->data(index).toString().toStdString();
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),2,QModelIndex());
        via = ui->tblRicerca->model()->data(index).toString().toStdString();
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),3,QModelIndex());
        civico = ui->tblRicerca->model()->data(index).toString().toStdString();
    }else if (ui->rBtnAzienda->isChecked() && check==false){
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),0,QModelIndex());
        ragioneSociale = ui->tblRicerca->model()->data(index).toString().toStdString();
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),1,QModelIndex());
        via = ui->tblRicerca->model()->data(index).toString().toStdString();
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),2,QModelIndex());
        civico = ui->tblRicerca->model()->data(index).toString().toStdString();
    }else if (check==true){
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),0,QModelIndex());
        tipologia = ui->tblRicerca->model()->data(index).toString().toStdString();
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),1,QModelIndex());
        ragioneSociale = ui->tblRicerca->model()->data(index).toString().toStdString();
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),2,QModelIndex());
        cognome = ui->tblRicerca->model()->data(index).toString().toStdString();
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),3,QModelIndex());
        nome = ui->tblRicerca->model()->data(index).toString().toStdString();
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),4,QModelIndex());
        via = ui->tblRicerca->model()->data(index).toString().toStdString();
        index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),5,QModelIndex());
        civico = ui->tblRicerca->model()->data(index).toString().toStdString();
    }

    db = new DbConnect();
    db->openConnection();

    stringQuery="SELECT data_richiesta FROM richiesta r, cliente c WHERE c.id_cliente=r.cliente ORDER BY data_richiesta DESC LIMIT 1";
    query = db->executeQuery(QString::fromStdString(stringQuery));

    ui->lblDataUltimaRichiestaDb->setVisible(true);
    query.next();
    ui->lblDataUltimaRichiestaDb->setText(query.value(0).toString());


    db->closeConnection();

}
