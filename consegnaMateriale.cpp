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
    ui->btnSalva->setEnabled(false);
    ui->BtnElenco->setEnabled(false);
    ui->txtCognome->setEnabled(false);
    ui->txtNome->setEnabled(false);
    ui->txtRagioneSociale->setEnabled(false);
    ui->txtCivico->setEnabled(false);
    ui->txtVia->setEnabled(false);
}

Consegna_Materiale::~Consegna_Materiale()
{
    delete ui;
}

void Consegna_Materiale::on_BtnMaterialeEsci_clicked()
{
    MessageExitConsegnaMateriale.setWindowTitle("Vuoi tornare indietro?");
    MessageExitConsegnaMateriale.setText("Vuoi tornare al menù principale?");
    MessageExitConsegnaMateriale.setIcon(QMessageBox::Information);
    BtnSiConsegnaMateriale = MessageExitConsegnaMateriale.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoConsegnaMateriale = MessageExitConsegnaMateriale.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitConsegnaMateriale.exec();

    if (MessageExitConsegnaMateriale.clickedButton()==BtnSiConsegnaMateriale){
          MessageExitConsegnaMateriale.close();
            this->hide();
             MainMenu *menu = new MainMenu (this);
            menu->show();
          }else{
            MessageExitConsegnaMateriale.removeButton(BtnSiConsegnaMateriale);
            MessageExitConsegnaMateriale.removeButton(BtnNoConsegnaMateriale);
            MessageExitConsegnaMateriale.close();

}

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
    ragioneSociale=ui->txtRagioneSociale->text().toStdString();
    cognome=ui->txtCognome->text().toStdString();
    nome=ui->txtNome->text().toStdString();
    via=ui->txtVia->text().toStdString();
    civico=ui->txtCivico->text().toStdString();
    db = new DbConnect();
    db->openConnection();
    if (!ragioneSociale.empty() && cognome.empty() && nome.empty() && !via.empty() && !civico.empty()){
        stringQuery="SELECT RAGIONE_SOCIALE,VIA,N_CIVICO "
                    "FROM cliente "
                    "WHERE TIPOLOGIA='AZIENDA' AND RAGIONE_SOCIALE LIKE '%"+ragioneSociale+"%' AND VIA='"+via+"' AND N_CIVICO='"+civico+"'";
        query = db->executeQuery(QString::fromStdString(stringQuery));
    }else if (ragioneSociale.empty() && !cognome.empty() && !nome.empty() && !via.empty() && !civico.empty()){
        stringQuery="SELECT COGNOME,NOME,VIA,N_CIVICO "
                    "FROM cliente "
                    "WHERE TIPOLOGIA='PRIVATO' AND COGNOME='"+cognome+"' AND NOME='"+nome+"' AND VIA='"+via+"' AND N_CIVICO='"+civico+"'";
        query = db->executeQuery(QString::fromStdString(stringQuery));
    }else if (ragioneSociale.empty() && !cognome.empty() && nome.empty() && via.empty() && civico.empty()){
        stringQuery="SELECT COGNOME,NOME,VIA,N_CIVICO "
                    "FROM cliente "
                    "WHERE TIPOLOGIA='PRIVATO' AND COGNOME='"+cognome+"'";
        query = db->executeQuery(QString::fromStdString(stringQuery));
    }else if (!ragioneSociale.empty() && cognome.empty() && nome.empty() && via.empty() && civico.empty()){
        stringQuery="SELECT RAGIONE_SOCIALE,VIA,N_CIVICO "
                    "FROM cliente "
                    "WHERE TIPOLOGIA='AZIENDA' AND RAGIONE_SOCIALE LIKE '%"+ragioneSociale+"%'";
        query = db->executeQuery(QString::fromStdString(stringQuery));
    }else if (ragioneSociale.empty() && !cognome.empty() && !nome.empty() && via.empty() && civico.empty()){
        stringQuery="SELECT COGNOME,NOME,VIA,N_CIVICO "
                    "FROM cliente "
                    "WHERE TIPOLOGIA='PRIVATO' AND COGNOME='"+cognome+"' AND NOME='"+nome+"'";
        query = db->executeQuery(QString::fromStdString(stringQuery));
    }else if (ragioneSociale.empty() && cognome.empty() && nome.empty() && !via.empty() && !civico.empty()){
        if (ui->rBtnPrivato->isChecked()){
            stringQuery="SELECT COGNOME,NOME,VIA,N_CIVICO "
                    "FROM cliente "
                    "WHERE TIPOLOGIA= 'PRIVATO' AND VIA='"+via+"' AND N_CIVICO='"+civico+"'";
        }else if (ui->rBtnAzienda->isChecked()){
            stringQuery="SELECT RAGIONE_SOCIALE,VIA,N_CIVICO "
                    "FROM cliente "
                    "WHERE TIPOLOGIA= 'AZIENDA' AND VIA='"+via+"' AND N_CIVICO='"+civico+"'";
        }
        query = db->executeQuery(QString::fromStdString(stringQuery));
    }else if (ragioneSociale.empty() && cognome.empty() && nome.empty() && !via.empty() && civico.empty()){
        if (ui->rBtnPrivato->isChecked()){
            stringQuery="SELECT COGNOME,NOME,VIA,N_CIVICO "
                    "FROM cliente "
                    "WHERE TIPOLOGIA= 'PRIVATO' AND VIA='"+via+"'";
        }else if (ui->rBtnAzienda->isChecked()){
            stringQuery="SELECT RAGIONE_SOCIALE,VIA,N_CIVICO "
                    "FROM cliente "
                    "WHERE TIPOLOGIA= 'AZIENDA' AND VIA='"+via+"'";
        }
        query = db->executeQuery(QString::fromStdString(stringQuery));
    }else if (ragioneSociale.empty() && cognome.empty() && !nome.empty() && via.empty() && civico.empty()){
        error.information(nullptr,"Attenzione!","Non è possibile eseguire la ricerca per nome!");
    }else if (ragioneSociale.empty() && cognome.empty() && nome.empty() && via.empty() && !civico.empty()){
        error.information(nullptr,"Attenzione!","Non è possibile eseguire la ricerca per numero civico!");
    }else if (ragioneSociale.empty() && cognome.empty() && nome.empty() && via.empty() && civico.empty()){
        error.information(nullptr,"Attenzione!","Inserire almeno uno dei seguenti campi:\n"
                                          "-Ragione Sociale\n"
                                          "-Cognome\n"
                                          "-Via");
    }

    if (query.size()==0){
        error.information(nullptr,"Cittadino non trovato","Il cittadino non risulta nell'elenco anagrafico!");
    }else{
        model=new QSqlQueryModel();
        model->setQuery(query);
        if (ui->rBtnPrivato->isChecked() ){
            model->setHeaderData(0,Qt::Horizontal,"COGNOME");
            model->setHeaderData(1,Qt::Horizontal,"NOME");
            model->setHeaderData(2,Qt::Horizontal,"VIA");
            model->setHeaderData(3,Qt::Horizontal,"NUMERO CIVICO");
        }else if (ui->rBtnAzienda->isChecked() ){
            model->setHeaderData(0,Qt::Horizontal,"RAGIONE SOCIALE");
            model->setHeaderData(1,Qt::Horizontal,"VIA");
            model->setHeaderData(2,Qt::Horizontal,"NUMERO CIVICO");

        }
        ui->tblRicerca->setModel(model);
        ui->tblRicerca->resizeColumnsToContents();
        ui->cmdLinkBtnVerifica->setEnabled(true);
        }
    query.clear();
    db->closeConnection();

}

void Consegna_Materiale::on_rBtnPrivato_clicked()
{
    model=new QSqlQueryModel();
    model->clear();
    ui->lblDataUltimaRichiestaDb->clear();
    ui->tblRicerca->setModel(model);
    ui->BtnElenco->setEnabled(true);
    ui->txtCognome->clear();
    ui->txtNome->clear();
    ui->txtVia->clear();
    ui->txtCivico->clear();
    ui->txtRagioneSociale->clear();
    ui->txtRagioneSociale->setEnabled(false);
    ui->txtCognome->setEnabled(true);
    ui->txtNome->setEnabled(true);
    ui->txtCivico->setEnabled(true);
    ui->txtVia->setEnabled(true);
    ui->grpMastelli->setEnabled(true);
    ui->grpSecchi240->setEnabled(true);
    ui->grpSecchi360->setEnabled(false);
}

void Consegna_Materiale::on_rBtnAzienda_clicked()
{
    model=new QSqlQueryModel();
    model->clear();
    ui->lblDataUltimaRichiestaDb->clear();
    ui->tblRicerca->setModel(model);
    ui->BtnElenco->setEnabled(true);
    ui->txtCognome->clear();
    ui->txtNome->clear();
    ui->txtVia->clear();
    ui->txtCivico->clear();
    ui->txtRagioneSociale->clear();
    ui->txtCognome->setEnabled(false);
    ui->txtNome->setEnabled(false);
    ui->txtRagioneSociale->setEnabled(true);
    ui->txtCivico->setEnabled(true);
    ui->txtVia->setEnabled(true);
    ui->grpMastelli->setEnabled(false);
    ui->grpSecchi240->setEnabled(true);
    ui->grpSecchi360->setEnabled(true);
}

void Consegna_Materiale::on_BtnElenco_clicked()
{
    ElencoTari *elencoTari = new ElencoTari(this,this);
    elencoTari->show();
}

void Consegna_Materiale::on_cmdLinkBtnVerifica_clicked()
{
    if (ui->tblRicerca->selectionModel()->currentIndex().row()==-1){
        error.information(nullptr,"Attenzione!","Devi selezionare un cittadino dalla lista!");
    }else{
        ui->btnSalva->setEnabled(true);
            if (ui->rBtnPrivato->isChecked()){
                index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),0,QModelIndex());
                cognome = ui->tblRicerca->model()->data(index).toString().toStdString();
                index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),1,QModelIndex());
                nome = ui->tblRicerca->model()->data(index).toString().toStdString();
                index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),2,QModelIndex());
                via = ui->tblRicerca->model()->data(index).toString().toStdString();
                index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),3,QModelIndex());
                civico = ui->tblRicerca->model()->data(index).toString().toStdString();
            }else if (ui->rBtnAzienda->isChecked()){
                index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),0,QModelIndex());
                ragioneSociale = ui->tblRicerca->model()->data(index).toString().toStdString();
                index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),1,QModelIndex());
                via = ui->tblRicerca->model()->data(index).toString().toStdString();
                index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),2,QModelIndex());
                civico = ui->tblRicerca->model()->data(index).toString().toStdString();
             }

    db = new DbConnect();
    db->openConnection();

    if (ui->rBtnPrivato->isChecked()){
    stringQuery="SELECT data_richiesta "
                "FROM richiesta r, cliente c "
                "WHERE c.id_cliente=r.cliente AND c.cognome='"+cognome+"' AND c.nome='"+nome+"' AND c.via='"+via+"' AND c.n_civico='"+civico+"'"
                "ORDER BY data_richiesta "
                "DESC LIMIT 1";
    }else if (ui->rBtnAzienda->isChecked()){
        stringQuery="SELECT data_richiesta "
                    "FROM richiesta r, cliente c "
                    "WHERE c.id_cliente=r.cliente AND c.ragione_sociale='"+ragioneSociale+"' AND c.via='"+via+"' AND c.n_civico='"+civico+"'"
                    "ORDER BY data_richiesta "
                    "DESC LIMIT 1";
    }
    query = db->executeQuery(QString::fromStdString(stringQuery));
    if (query.size()==0){
        ui->lblDataUltimaRichiestaDb->setVisible(true);
        error.information(nullptr,"Info","Il cliente non ha mai effetuato una richiesta!");
    }else{
    ui->lblDataUltimaRichiestaDb->setVisible(true);
    query.next();
    ui->lblDataUltimaRichiestaDb->setText(query.value(0).toString());
    }
    query.clear();
    db->closeConnection();
    }
}


void Consegna_Materiale::on_tblRicerca_clicked(const QModelIndex &index)
{
   index.row();
   ui->lblDataUltimaRichiestaDb->clear();
}

void Consegna_Materiale::on_btnSalva_clicked()
{
    db->openConnection();
    if (ui->comboBoxBianche->currentIndex()==0 && ui->comboBoxRosse->currentIndex()==0 && ui->comboBoxVerdi->currentIndex()==0
            && ui->comboBoxBlu->currentIndex()==0 && ui->comboBoxCalendari->currentIndex()==0 && ui->comboBoxSecchiUmido240->currentIndex()==0 &&
            ui->comboBoxMastelliUmido->currentIndex()==0 && ui->comboBoxMastelliVetro->currentIndex()==0 && ui->comboBoxSecchiVetro240->currentIndex()==0
            && ui->comboBoxSecchiUmido360->currentIndex()==0 && ui->comboBoxSecchiVetro360->currentIndex()==0){
        error.information(nullptr,"Attenzione!","Devi indicare almeno un materiale da consegnare al cittadino!");
    }else if (ui->rBtnPrivato->isChecked()){
        stringQuery="SELECT id_cliente "
                    "FROM cliente "
                    "WHERE cognome='"+cognome+"' AND nome='"+nome+"' AND via='"+via+"' AND n_civico='"+civico+"'";
        query = db->executeQuery(QString::fromStdString(stringQuery));
        query.next();
        id_cliente=query.value(0).toString().toStdString();
        stringQuery="INSERT INTO richiesta "
                    "VALUES (CURRENT_DATE(),'"+id_cliente+"','"+QVariant(ui->comboBoxRosse->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxBlu->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxVerdi->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxBianche->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxCalendari->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxMastelliUmido->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxMastelliVetro->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxSecchiUmido240->currentIndex()).toString().toStdString()+"','"
                                              +"0','"
                                              +QVariant(ui->comboBoxSecchiVetro240->currentIndex()).toString().toStdString()+"','"
                                              +"0');";
        query = db->executeQuery(QString::fromStdString(stringQuery));
        if (db->lastError().isValid()){
            error.information(nullptr,"Attenzione","Errore nel database!\nProbabilmente è già stata registrata la stessa richiesta!");
        }else{
            error.information(nullptr,"Info","Richiesta registrata correttamente!");
            ui->comboBoxBianche->setCurrentIndex(0);
            ui->comboBoxBlu->setCurrentIndex(0);
            ui->comboBoxVerdi->setCurrentIndex(0);
            ui->comboBoxRosse->setCurrentIndex(0);
            ui->comboBoxCalendari->setCurrentIndex(0);
            ui->comboBoxMastelliUmido->setCurrentIndex(0);
            ui->comboBoxMastelliVetro->setCurrentIndex(0);
            ui->comboBoxSecchiUmido240->setCurrentIndex(0);
            ui->comboBoxSecchiUmido360->setCurrentIndex(0);
            ui->comboBoxSecchiVetro240->setCurrentIndex(0);
            ui->comboBoxSecchiVetro360->setCurrentIndex(0);
            ui->lblDataUltimaRichiestaDb->clear();
            model->clear();
            ui->tblRicerca->setModel(model);
            ui->txtCognome->clear();
            ui->txtNome->clear();
            ui->txtRagioneSociale->clear();
            ui->txtVia->clear();
            ui->txtCivico->clear();
        }
    }else if (ui->rBtnAzienda->isChecked()){
        stringQuery="SELECT id_cliente "
                    "FROM cliente "
                    "WHERE ragione_sociale='"+ragioneSociale+"' AND via='"+via+"' AND n_civico='"+civico+"'";
        query = db->executeQuery(QString::fromStdString(stringQuery));
        query.next();
        id_cliente=query.value(0).toString().toStdString();
        stringQuery="INSERT INTO richiesta "
                    "VALUES (CURRENT_DATE(),'"+id_cliente+"','"+QVariant(ui->comboBoxRosse->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxBlu->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxVerdi->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxBianche->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxCalendari->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxMastelliUmido->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxMastelliVetro->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxSecchiUmido240->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxSecchiUmido360->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxSecchiVetro240->currentIndex()).toString().toStdString()+"','"
                                              +QVariant(ui->comboBoxSecchiVetro360->currentIndex()).toString().toStdString()+"');";
        query = db->executeQuery(QString::fromStdString(stringQuery));
        if (db->lastError().isValid()){
            error.information(nullptr,"Attenzione","Errore nel database!\nProbabilmente è già stata registrata la stessa richiesta!");
        }else{
            error.information(nullptr,"Info","Richiesta registrata correttamente!");
            ui->comboBoxBianche->setCurrentIndex(0);
            ui->comboBoxBlu->setCurrentIndex(0);
            ui->comboBoxVerdi->setCurrentIndex(0);
            ui->comboBoxRosse->setCurrentIndex(0);
            ui->comboBoxCalendari->setCurrentIndex(0);
            ui->comboBoxMastelliUmido->setCurrentIndex(0);
            ui->comboBoxMastelliVetro->setCurrentIndex(0);
            ui->comboBoxSecchiUmido240->setCurrentIndex(0);
            ui->comboBoxSecchiUmido360->setCurrentIndex(0);
            ui->comboBoxSecchiVetro240->setCurrentIndex(0);
            ui->comboBoxSecchiVetro360->setCurrentIndex(0);
            ui->lblDataUltimaRichiestaDb->clear();
            model->clear();
            ui->tblRicerca->setModel(model);
            ui->txtCognome->clear();
            ui->txtNome->clear();
            ui->txtRagioneSociale->clear();
            ui->txtVia->clear();
            ui->txtCivico->clear();
        }
    }
}

void Consegna_Materiale::setValoriPrivato(QString setCognome,QString setNome,QString setVia,QString setCivico){
    ui->txtCognome->setText(setCognome);
    ui->txtNome->setText(setNome);
    ui->txtVia->setText(setVia);
    ui->txtCivico->setText(setCivico);
    this->on_BtnCerca_clicked();
    ui->tblRicerca->selectRow(0);
    this->on_cmdLinkBtnVerifica_clicked();
}

void Consegna_Materiale::setValoriAzienda(QString setRagioneSociale,QString setVia,QString setCivico){
    ui->txtRagioneSociale->setText(setRagioneSociale);
    ui->txtVia->setText(setVia);
    ui->txtCivico->setText(setCivico);
    this->on_BtnCerca_clicked();
    ui->tblRicerca->selectRow(0);
    this->on_cmdLinkBtnVerifica_clicked();
}
