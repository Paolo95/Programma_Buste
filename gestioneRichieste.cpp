#include "gestioneRichieste.h"
#include "ui_gestioneRichieste.h"

GestioneRichieste::GestioneRichieste(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestioneRichieste)
{
    ui->setupUi(this);
    ui->txtCognome->setEnabled(false);
    ui->txtNome->setEnabled(false);
    ui->txtRagioneSociale->setEnabled(false);
    ui->txtCivico->setEnabled(false);
    ui->txtVia->setEnabled(false);
}

GestioneRichieste::~GestioneRichieste()
{
    delete ui;
}

void GestioneRichieste::closeEvent (QCloseEvent *event)
{
    event->ignore();
    this->hide();
    MainMenu *menu = new MainMenu (this);
    menu->show();
}

void GestioneRichieste::on_btnRichiesteEsci_clicked()
{
    MessageExitGestioneRichieste.setWindowTitle("Vuoi tornare indietro?");
    MessageExitGestioneRichieste.setText("Vuoi tornare al menù principale?");
    MessageExitGestioneRichieste.setIcon(QMessageBox::Information);
    BtnSiGestioneRichieste = MessageExitGestioneRichieste.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoGestioneRichieste = MessageExitGestioneRichieste.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitGestioneRichieste.exec();

    if (MessageExitGestioneRichieste.clickedButton()==BtnSiGestioneRichieste){
          MessageExitGestioneRichieste.close();
            this->hide();
             MainMenu *menu = new MainMenu (this);
            menu->show();
          }else{
            MessageExitGestioneRichieste.removeButton(BtnSiGestioneRichieste);
            MessageExitGestioneRichieste.removeButton(BtnNoGestioneRichieste);
            MessageExitGestioneRichieste.close();

}
}

void GestioneRichieste::on_BtnCerca_clicked()
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
        error.information(0,"Attenzione!","Non è possibile eseguire la ricerca per nome!");
    }else if (ragioneSociale.empty() && cognome.empty() && nome.empty() && via.empty() && !civico.empty()){
        error.information(0,"Attenzione!","Non è possibile eseguire la ricerca per numero civico!");
    }else if (ragioneSociale.empty() && cognome.empty() && nome.empty() && via.empty() && civico.empty()){
        error.information(0,"Attenzione!","Inserire almeno uno dei seguenti campi:\n"
                                          "-Ragione Sociale\n"
                                          "-Cognome\n"
                                          "-Via");
    }

    if (query.size()==0){
        error.information(0,"Cittadino non trovato","Il cittadino non risulta nell'elenco anagrafico!");
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
        ui->tblRicercaCittadino->setModel(model);
        ui->tblRicercaCittadino->resizeColumnsToContents();
        }
    query.clear();
    db->closeConnection();

}

void GestioneRichieste::on_rBtnPrivato_clicked()
{
    model=new QSqlQueryModel();
    model->clear();
    ui->tblRicercaCittadino->setModel(model);
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
}

void GestioneRichieste::on_rBtnAzienda_clicked()
{
    model=new QSqlQueryModel();
    model->clear();
    ui->tblRicercaCittadino->setModel(model);
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
}
