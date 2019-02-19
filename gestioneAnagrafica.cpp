#include "gestioneAnagrafica.h"
#include "ui_gestioneAnagrafica.h"

GestioneAnagrafica::GestioneAnagrafica(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GestioneAnagrafica)
{
    ui->setupUi(this);
    ui->txtCognome->setEnabled(false);
    ui->txtNome->setEnabled(false);
    ui->txtRagioneSociale->setEnabled(false);
    ui->txtCivico->setEnabled(false);
    ui->txtVia->setEnabled(false);
    ui->BtnInserisci->setEnabled(false);
    ui->cmdLinkBtnElimina->setEnabled(false);
    ui->cmdLinkBtnModifica->setEnabled(false);
    ui->grpModificaCittadino->setVisible(false);
    ui->BtnCerca->setEnabled(false);
}

GestioneAnagrafica::~GestioneAnagrafica()
{
    delete ui;
}

void GestioneAnagrafica::closeEvent (QCloseEvent *event)
{
    event->ignore();
    this->hide();
    MainMenu *menu = new MainMenu (this);
    menu->show();
}

void GestioneAnagrafica::on_rBtnPrivato_clicked()
{
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
    ui->BtnInserisci->setEnabled(true);
    ui->BtnCerca->setEnabled(true);
}

void GestioneAnagrafica::on_rBtnAzienda_clicked()
{
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
    ui->BtnInserisci->setEnabled(true);
    ui->BtnCerca->setEnabled(true);
}

void GestioneAnagrafica::activeButtonInserisci (){
    if(ui->rBtnAzienda->isChecked()){
        if(!ui->txtRagioneSociale->text().isEmpty() && !ui->txtVia->text().isEmpty() && !ui->txtCivico->text().isEmpty() ){
            ui->BtnInserisci->setEnabled(true);
        }else{
            ui->BtnInserisci->setEnabled(false);
        }
    }else if(ui->rBtnPrivato->isChecked()){
        if(!ui->txtCognome->text().isEmpty() && !ui->txtNome->text().isEmpty() && !ui->txtVia->text().isEmpty() &&
                !ui->txtCivico->text().isEmpty() ){
            ui->BtnInserisci->setEnabled(true);
        }else{
            ui->BtnInserisci->setEnabled(false);
        }
    }

}

void GestioneAnagrafica::on_BtnInserisci_clicked()
{
    MessageExitGestioneAnagrafica.setWindowTitle("Vuoi continuare?");
    MessageExitGestioneAnagrafica.setText("Sei sicuro di voler inserire il cittadino?");
    MessageExitGestioneAnagrafica.setIcon(QMessageBox::Information);
    BtnSiGestioneAnagrafica = MessageExitGestioneAnagrafica.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoGestioneAnagrafica = MessageExitGestioneAnagrafica.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitGestioneAnagrafica.exec();

    if (MessageExitGestioneAnagrafica.clickedButton()==BtnSiGestioneAnagrafica){
          MessageExitGestioneAnagrafica.close();
          ragioneSociale=ui->txtRagioneSociale->text().toUpper().toStdString();
          cognome=ui->txtCognome->text().toUpper().toStdString();
          nome=ui->txtNome->text().toUpper().toStdString();
          via=ui->txtVia->text().toUpper().toStdString();
          civico=ui->txtCivico->text().toStdString();
          db = new DbConnect();
          db->openConnection();
          if (ui->rBtnAzienda->isChecked()){

              if (ragioneSociale.empty() || via.empty() || civico.empty()){
              error.information(nullptr,"Attenzione!","Inserisci tutti i campi!");
              }
              else if (this->isNumeric(ragioneSociale) || this->isNumeric(via) || !this->isNumeric(civico)){
              error.information(nullptr,"Attenzione!","Campi/o errati/o");
          }else{
              stringQuery="SELECT RAGIONE_SOCIALE,VIA,N_CIVICO "
                              "FROM cliente "
                              "WHERE TIPOLOGIA='AZIENDA' AND RAGIONE_SOCIALE LIKE '%"+ragioneSociale+"%' AND VIA='"+via+"' AND N_CIVICO='"+civico+"'";
              query = db->executeQuery(QString::fromStdString(stringQuery));
              if (query.size()==0){
                  query.clear();
                  stringQuery="INSERT INTO cliente "
                          "VALUES (NULL, 'AZIENDA', \""+ragioneSociale+"\" ,NULL,NULL, \""+via+"\", \""+civico+"\");";
                  query = db->executeQuery(QString::fromStdString(stringQuery));
                  error.information(nullptr,"Info","Cittadino inserito correttamente!");
                  MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
                  MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
                  MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
                  MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
                  ui->txtRagioneSociale->clear();
                  ui->txtVia->clear();
                  ui->txtCivico->clear();
              }else{
                  MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
                  MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
                  MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
                  MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
                  error.critical(nullptr,"Errore!","Il cittadino risulta già nel database!");
              }
              }
          }else if (ui->rBtnPrivato->isChecked()){
              if (cognome.empty() || nome.empty() || via.empty() || civico.empty() ){
              error.information(nullptr,"Attenzione!","Inserisci tutti i campi!");
              }
              else if (this->isNumeric(cognome) || this->isNumeric(nome) || this->isNumeric(via) || !this->isNumeric(civico)){
              error.information(nullptr,"Attenzione!","Campi/o errati/o");
          }else{
              stringQuery="SELECT COGNOME,NOME,VIA,N_CIVICO "
                              "FROM cliente "
                              "WHERE TIPOLOGIA='PRIVATO' AND COGNOME='"+cognome+"' AND NOME='"+nome+"' AND VIA='"+via+"' AND N_CIVICO='"+civico+"'";
              query = db->executeQuery(QString::fromStdString(stringQuery));
              if (query.size()==0){
              query.clear();
              stringQuery="INSERT INTO cliente "
                          "VALUES (NULL, 'PRIVATO', NULL, \""+cognome+"\" , \""+nome+"\" , \""+via+"\", \""+civico+"\");";
              query = db->executeQuery(QString::fromStdString(stringQuery));
              error.information(nullptr,"Info","Cittadino inserito correttamente!");
              ui->txtCognome->clear();
              ui->txtNome->clear();
              ui->txtVia->clear();
              ui->txtCivico->clear();
              }else{
                  error.critical(nullptr,"Errore!","Il cittadino risulta già nel database!");
                  MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
                  MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
                  MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
                  MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
              }
              }
              MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
              MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
              MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
              MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
              MessageExitGestioneAnagrafica.close();
      }
      db->closeConnection();
          }else{
            MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
            MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
            MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
            MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
            MessageExitGestioneAnagrafica.close();
}

}

bool GestioneAnagrafica::isNumeric (string text){
    bool result=false;

    for (uint i=0; i<text.size() ; i++){
        if (!isalpha(text[i])){
            result=true;
        }
        else{
            result=false;
    }
    }
    return result;
}

void GestioneAnagrafica::on_BtnCerca_clicked()
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
        ui->cmdLinkBtnElimina->setEnabled(true);
        ui->cmdLinkBtnModifica->setEnabled(true);
    }
    query.clear();
    db->closeConnection();

}

void GestioneAnagrafica::on_cmdLinkBtnElimina_clicked()
{
    if (ui->tblRicerca->selectionModel()->currentIndex().row()==-1){
        error.information(nullptr,"Attenzione!","Devi selezionare un cittadino dalla lista!");
    }else{
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

    index = model->index(ui->tblRicerca->selectionModel()->currentIndex().row(),0,QModelIndex());

    MessageExitGestioneAnagrafica.setWindowTitle("Vuoi procedere?");
    MessageExitGestioneAnagrafica.setText("Sei sicuro di voler eliminare il cittadino?");
    MessageExitGestioneAnagrafica.setIcon(QMessageBox::Information);
    BtnSiGestioneAnagrafica = MessageExitGestioneAnagrafica.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoGestioneAnagrafica = MessageExitGestioneAnagrafica.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitGestioneAnagrafica.exec();

    if (ui->rBtnPrivato->isChecked()){
        stringQuery="SELECT id_cliente "
                "FROM cliente "
                "WHERE cognome='"+cognome+"' AND nome='"+nome+"' AND via='"+via+"' AND n_civico='"+civico+"' ";
        query = db->executeQuery(QString::fromStdString(stringQuery));
        query.next();
        codiceCliente=query.value(0).toUInt();
        query.clear();

    }else if (ui->rBtnAzienda->isChecked()){
        stringQuery="SELECT id_cliente "
                    "FROM cliente "
                    "WHERE ragione_sociale='"+ragioneSociale+"' AND via='"+via+"' AND n_civico='"+civico+"'";
        query = db->executeQuery(QString::fromStdString(stringQuery));
        query.next();
        codiceCliente=query.value(0).toUInt();
        query.clear();
    }

    if (MessageExitGestioneAnagrafica.clickedButton()==BtnSiGestioneAnagrafica){
          MessageExitGestioneAnagrafica.close();
            stringQuery="DELETE FROM cliente "
                        "WHERE id_cliente="+to_string(codiceCliente)+" ";
            query = db->executeQuery(QString::fromStdString(stringQuery));
                MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
                MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
          }else{
            MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
            MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
            MessageExitGestioneAnagrafica.close();
          }
    }
    if (query.isValid()==0){
        if (query.lastError().nativeErrorCode().toInt()==1451){
            error.critical(nullptr,"Errore!","Non è possibile effettuare l'operazione.\n\nCodice errore database: "
                           +query.lastError().nativeErrorCode()+"\nIl cittadino ha delle richieste associate! "
                           "Eliminare tutte le richieste effettuate prima di eliminare il cittadino!");
            query.clear();
        }else{
            error.critical(nullptr,"Errore!","Errore nel database, codice errore: "+query.lastError().nativeErrorCode());
            query.clear();
        }
    }else{
        query.clear();
        error.information(nullptr,"Info","Cittadino eliminato correttamente!");
        model=new QSqlQueryModel();
        model->clear();
        ui->tblRicerca->setModel(model);
        ui->txtCognome->clear();
        ui->txtNome->clear();
        ui->txtRagioneSociale->clear();
        ui->txtCivico->clear();
        ui->txtVia->clear();
        ui->cmdLinkBtnElimina->setEnabled(false);
        ui->cmdLinkBtnModifica->setEnabled(false);
    }

    db->closeConnection();
}

void GestioneAnagrafica::on_cmdLinkBtnModifica_clicked()
{

    if (ui->tblRicerca->selectionModel()->currentIndex().row()==-1){
        error.information(nullptr,"Attenzione!","Devi selezionare un cittadino dalla lista!");
    }else{
        ui->BtnModifica->setEnabled(false);
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

    ui->grpModificaCittadino->setVisible(true);

    if (ui->rBtnAzienda->isChecked()){
        ui->txtCognomeMod->setEnabled(false);
        ui->txtNomeMod->setEnabled(false);
        ui->txtRagioneSocialeMod->setText(QString::fromStdString(ragioneSociale));
        ui->txtViaMod->setText(QString::fromStdString(via));
        ui->txtCivicoMod->setText(QString::fromStdString(civico));
    }else if (ui->rBtnPrivato->isChecked()){
        ui->txtRagioneSocialeMod->setEnabled(false);
        ui->txtCognomeMod->setText(QString::fromStdString(cognome));
        ui->txtNomeMod->setText(QString::fromStdString(nome));
        ui->txtViaMod->setText(QString::fromStdString(via));
        ui->txtCivicoMod->setText(QString::fromStdString(civico));
    }
}
}


void GestioneAnagrafica::on_btnAnagraficaEsci_clicked()
{
    MessageExitGestioneAnagrafica.setWindowTitle("Vuoi tornare indietro?");
    MessageExitGestioneAnagrafica.setText("Vuoi tornare al menù principale?");
    MessageExitGestioneAnagrafica.setIcon(QMessageBox::Information);
    BtnSiGestioneAnagrafica = MessageExitGestioneAnagrafica.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoGestioneAnagrafica = MessageExitGestioneAnagrafica.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitGestioneAnagrafica.exec();

    if (MessageExitGestioneAnagrafica.clickedButton()==BtnSiGestioneAnagrafica){
          MessageExitGestioneAnagrafica.close();
            this->hide();
            MainMenu *menu = new MainMenu (this);
            menu->show();
          }else{
            MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
            MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
            MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
            MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
            MessageExitGestioneAnagrafica.close();
}
}

void GestioneAnagrafica::on_txtRagioneSocialeMod_textChanged(const QString &arg1)
{
    if (!QString::fromStdString(ragioneSociale).compare(arg1) ){
         ui->txtRagioneSocialeMod->setStyleSheet("");
    }
    else{
        ui->txtRagioneSocialeMod->setStyleSheet("QLineEdit { background-color: red; }");
    }
    this->activeButtonModifica();
}


void GestioneAnagrafica::on_txtCognomeMod_textChanged(const QString &arg1)
{
    if (!QString::fromStdString(cognome).compare(arg1) ){
         ui->txtCognomeMod->setStyleSheet("");
    }
    else{
        ui->txtCognomeMod->setStyleSheet("QLineEdit { background-color: red; }");
    }
    this->activeButtonModifica();
}

void GestioneAnagrafica::on_txtViaMod_textChanged(const QString &arg1)
{
    if (!QString::fromStdString(via).compare(arg1) ){
         ui->txtViaMod->setStyleSheet("");
    }
    else{
        ui->txtViaMod->setStyleSheet("QLineEdit { background-color: red; }");
    }
    this->activeButtonModifica();
}

void GestioneAnagrafica::on_txtNomeMod_textChanged(const QString &arg1)
{
    if (!QString::fromStdString(nome).compare(arg1) ){
         ui->txtNomeMod->setStyleSheet("");
    }
    else{
        ui->txtNomeMod->setStyleSheet("QLineEdit { background-color: red; }");
    }
    this->activeButtonModifica();
}

void GestioneAnagrafica::on_txtCivicoMod_textChanged(const QString &arg1)
{
    if (!QString::fromStdString(civico).compare(arg1) ){
         ui->txtCivicoMod->setStyleSheet("");
    }
    else{
        ui->txtCivicoMod->setStyleSheet("QLineEdit { background-color: red; }");
    }
    this->activeButtonModifica();
}

void GestioneAnagrafica::activeButtonModifica (){

   if( ui->txtRagioneSocialeMod->styleSheet().isEmpty() &&
       ui->txtCognomeMod->styleSheet().isEmpty() && ui->txtNomeMod->styleSheet().isEmpty() &&
       ui->txtViaMod->styleSheet().isEmpty() && ui->txtCivicoMod->styleSheet().isEmpty() ){
        ui->BtnModifica->setEnabled(false);
    }else if (ui->rBtnPrivato->isChecked() && (ui->txtCognomeMod->text().isEmpty() || ui->txtNomeMod->text().isEmpty() ||
              ui->txtViaMod->text().isEmpty() || ui->txtCivicoMod->text().isEmpty())){
       ui->BtnModifica->setEnabled(false);
        }else if (ui->rBtnAzienda->isChecked() && (ui->txtRagioneSocialeMod->text().isEmpty() ||
                  ui->txtCognomeMod->text().isEmpty() || ui->txtNomeMod->text().isEmpty() ||
              ui->txtViaMod->text().isEmpty() || ui->txtCivicoMod->text().isEmpty())){
       ui->BtnModifica->setEnabled(false);
   }else{
       ui->BtnModifica->setEnabled(true);
   }
}

void GestioneAnagrafica::on_BtnModifica_clicked()
{
    MessageExitGestioneAnagrafica.setWindowTitle("Confermi?");
    MessageExitGestioneAnagrafica.setText("Vuoi confermare la modifica?");
    MessageExitGestioneAnagrafica.setIcon(QMessageBox::Information);
    BtnSiGestioneAnagrafica = MessageExitGestioneAnagrafica.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoGestioneAnagrafica = MessageExitGestioneAnagrafica.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitGestioneAnagrafica.exec();

    if (MessageExitGestioneAnagrafica.clickedButton()==BtnSiGestioneAnagrafica){
          MessageExitGestioneAnagrafica.close();
          db = new DbConnect();
          db->openConnection();

          if (ui->rBtnPrivato->isChecked()){
          stringQuery="SELECT id_cliente "
                      "FROM cliente "
                      "WHERE cognome=\""+cognome+"\" AND nome=\""+nome+"\" AND via=\""+via+"\" AND n_civico=\""+civico+"\" ";
          }else if (ui->rBtnAzienda->isChecked()){
              stringQuery="SELECT id_cliente "
                          "FROM cliente "
                          "WHERE ragione_sociale=\""+ragioneSociale+"\" AND via=\""+via+"\" AND n_civico\""+civico+"\"";
          }

          query = db->executeQuery(QString::fromStdString(stringQuery));
          query.next();
          codiceCliente=query.value(0).toUInt();

          query.clear();

          if (ui->rBtnAzienda->isChecked()){
          stringQuery="UPDATE cliente "
                          "SET  ragione_sociale=\""+ui->txtRagioneSocialeMod->text().toStdString()+"\", via=\""
                                        +ui->txtViaMod->text().toStdString()+"\", n_civico=\""
                                        +ui->txtCivicoMod->text().toStdString()+"\" "
                          "WHERE id_cliente="+to_string(codiceCliente)+" ";
          }else if(ui->rBtnPrivato->isChecked()){
          stringQuery="UPDATE cliente "
                          "SET  cognome=\""+ui->txtCognomeMod->text().toStdString()+"\", nome=\""
                                        +ui->txtNomeMod->text().toStdString()+"\", via=\""
                                        +ui->txtViaMod->text().toStdString()+"\", n_civico=\""
                                        +ui->txtCivicoMod->text().toStdString()+"\" "
                          "WHERE id_cliente="+to_string(codiceCliente)+" ";
          }
          query = db->executeQuery(QString::fromStdString(stringQuery));
          query.clear();

          db->closeConnection();
          ui->txtCognomeMod->clear();
          ui->txtNomeMod->clear();
          ui->txtRagioneSocialeMod->clear();
          ui->txtCivicoMod->clear();
          ui->txtViaMod->clear();
          ui->txtCognomeMod->setStyleSheet("");
          ui->txtNomeMod->setStyleSheet("");
          ui->txtViaMod->setStyleSheet("");
          ui->txtCivicoMod->setStyleSheet("");
          ui->txtRagioneSocialeMod->setStyleSheet("");
          ui->txtCognome->clear();
          ui->txtNome->clear();
          ui->txtRagioneSociale->clear();
          ui->txtVia->clear();
          ui->txtCivico->clear();
          ui->grpModificaCittadino->setVisible(false);
          model=new QSqlQueryModel();
          model->clear();
          ui->tblRicerca->setModel(model);
          ui->cmdLinkBtnElimina->setEnabled(false);
          ui->cmdLinkBtnModifica->setEnabled(false);
          error.information(nullptr,"Info","Modifica effettuata con successo!");
          MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
          MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
          MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
          MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
          MessageExitGestioneAnagrafica.close();
          }else{
            MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
            MessageExitGestioneAnagrafica.removeButton(BtnSiGestioneAnagrafica);
            MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
            MessageExitGestioneAnagrafica.removeButton(BtnNoGestioneAnagrafica);
            MessageExitGestioneAnagrafica.close();}

}
