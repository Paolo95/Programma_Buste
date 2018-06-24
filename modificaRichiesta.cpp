#include "modificaRichiesta.h"
#include "ui_modificaRichiesta.h"

ModificaRichiesta::ModificaRichiesta(GestioneRichieste *g,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModificaRichiesta)
{
    ui->setupUi(this);
    f=g;
    dataGestioneQ = QString::fromStdString(f->dataRichiesta);
    dataGestione = QDate::fromString(dataGestioneQ,"yyyy-MM-dd");
    ui->dateEditRichiesta->setDate(dataGestione);
    ui->btnSalva->setEnabled(false);

    if (f->ui->rBtnPrivato->isChecked()){
        ui->grpSecchi->setEnabled(false);
        ui->comboBoxBianche->setCurrentIndex(f->nBianche);
        ui->comboBoxVerdi->setCurrentIndex(f->nVerdi);
        ui->comboBoxBlu->setCurrentIndex(f->nBlu);
        ui->comboBoxRosse->setCurrentIndex(f->nRosse);
        ui->comboBoxCalendari->setCurrentIndex(f->nCalendari);
        ui->comboBoxUmido->setCurrentIndex(f->nMastelliUmido);
        ui->comboBoxVetro->setCurrentIndex(f->nMastelliVetro);
    }else if (f->ui->rBtnAzienda->isChecked()){
        ui->grpMastelli->setEnabled(false);
        ui->comboBoxBianche->setCurrentIndex(f->nBianche);
        ui->comboBoxVerdi->setCurrentIndex(f->nVerdi);
        ui->comboBoxBlu->setCurrentIndex(f->nBlu);
        ui->comboBoxRosse->setCurrentIndex(f->nRosse);
        ui->comboBoxCalendari->setCurrentIndex(f->nCalendari);
        ui->comboBoxSecchi240->setCurrentIndex(f->nSecchi240);
        ui->comboBoxSecchi1100->setCurrentIndex(f->nSecchi1100);
    }

}

ModificaRichiesta::~ModificaRichiesta()
{
    delete ui;
}

void ModificaRichiesta::on_BtnMaterialeEsci_clicked()
{
    MessageExitGestioneRichieste.setWindowTitle("Vuoi tornare indietro?");
    MessageExitGestioneRichieste.setText("Vuoi uscire?");
    MessageExitGestioneRichieste.setIcon(QMessageBox::Information);
    BtnSiGestioneRichieste = MessageExitGestioneRichieste.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoGestioneRichieste = MessageExitGestioneRichieste.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitGestioneRichieste.exec();

    if (MessageExitGestioneRichieste.clickedButton()==BtnSiGestioneRichieste){
          MessageExitGestioneRichieste.close();
            this->hide();
    }else{
            MessageExitGestioneRichieste.removeButton(BtnSiGestioneRichieste);
            MessageExitGestioneRichieste.removeButton(BtnNoGestioneRichieste);
            MessageExitGestioneRichieste.close();

}
}

void ModificaRichiesta::on_comboBoxRosse_currentIndexChanged(int index)
{
    if ( index != (int) f->nRosse){
        ui->comboBoxRosse->setStyleSheet("QComboBox { background-color: red; }");
    }else{
        ui->comboBoxRosse->setStyleSheet("");
    }
    this->activeButtonModifica();
}

void ModificaRichiesta::on_comboBoxBlu_currentIndexChanged(int index)
{
    if ( index != (int) f->nBlu){
        ui->comboBoxBlu->setStyleSheet("QComboBox { background-color: red; }");
    }else{
        ui->comboBoxBlu->setStyleSheet("");
    }
    this->activeButtonModifica();
}

void ModificaRichiesta::on_comboBoxVerdi_currentIndexChanged(int index)
{
    if ( index != (int) f->nVerdi){
        ui->comboBoxVerdi->setStyleSheet("QComboBox { background-color: red; }");
    }else{
        ui->comboBoxVerdi->setStyleSheet("");
    }
    this->activeButtonModifica();
}

void ModificaRichiesta::on_comboBoxBianche_currentIndexChanged(int index)
{
    if ( index != (int) f->nBianche){
        ui->comboBoxBianche->setStyleSheet("QComboBox { background-color: red; }");
    }else{
        ui->comboBoxBianche->setStyleSheet("");
    }
    this->activeButtonModifica();
}

void ModificaRichiesta::on_comboBoxCalendari_currentIndexChanged(int index)
{
    if ( index != (int) f->nCalendari){
        ui->comboBoxCalendari->setStyleSheet("QComboBox { background-color: red; }");
    }else{
        ui->comboBoxCalendari->setStyleSheet("");
    }
    this->activeButtonModifica();
}

void ModificaRichiesta::on_comboBoxUmido_currentIndexChanged(int index)
{
    if ( index != (int) f->nMastelliUmido){
        ui->comboBoxUmido->setStyleSheet("QComboBox { background-color: red; }");
    }else{
        ui->comboBoxUmido->setStyleSheet("");
    }
    this->activeButtonModifica();
}

void ModificaRichiesta::on_comboBoxVetro_currentIndexChanged(int index)
{
    if ( index != (int) f->nMastelliVetro){
        ui->comboBoxVetro->setStyleSheet("QComboBox { background-color: red; }");
    }else{
        ui->comboBoxVetro->setStyleSheet("");
    }
    this->activeButtonModifica();
}

void ModificaRichiesta::on_comboBoxSecchi240_currentIndexChanged(int index)
{
    if ( index != (int) f->nSecchi240){
        ui->comboBoxSecchi240->setStyleSheet("QComboBox { background-color: red; }");
    }else{
        ui->comboBoxSecchi240->setStyleSheet("");
    }
    this->activeButtonModifica();
}

void ModificaRichiesta::on_comboBoxSecchi1100_currentIndexChanged(int index)
{
    if ( index != (int) f->nSecchi1100){
        ui->comboBoxSecchi1100->setStyleSheet("QComboBox { background-color: red; }");
    }else{
        ui->comboBoxSecchi1100->setStyleSheet("");
    }
    this->activeButtonModifica();
}


void ModificaRichiesta::on_dateEditRichiesta_userDateChanged(const QDate &date)
{
   if(!f->dataRichiesta.compare(date.toString("yyyy-MM-dd").toStdString())){
        ui->dateEditRichiesta->setStyleSheet("");
    }else{
        ui->dateEditRichiesta->setStyleSheet("QDateEdit { background-color: red; }");
    }
    this->activeButtonModifica();
}

void ModificaRichiesta::on_btnSalva_clicked()
{        
    db = new DbConnect();
    db->openConnection();

    if (f->ui->rBtnPrivato->isChecked()){
    stringQuery="SELECT id_cliente "
                "FROM cliente "
                "WHERE cognome='"+f->cognome+"' AND nome='"+f->nome+"' AND via='"+f->via+"' AND n_civico='"+f->civico+"' ";
    }else if (f->ui->rBtnAzienda->isChecked()){
        stringQuery="SELECT id_cliente "
                    "FROM cliente "
                    "WHERE ragione_sociale='"+f->ragioneSociale+"' AND via='"+f->via+"' AND n_civico='"+f->civico+"'";
    }

    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    codiceCliente=query.value(0).toUInt();

    query.clear();

    if (f->ui->rBtnPrivato->isChecked()){
        stringQuery="UPDATE richiesta "
                    "SET  data_richiesta='"+ui->dateEditRichiesta->date().toString("yyyy-MM-dd").toStdString()+"', n_rosse="
                                  +to_string(ui->comboBoxRosse->currentIndex())+", n_blu="
                                  +to_string(ui->comboBoxBlu->currentIndex())+", n_verdi="
                                  +to_string(ui->comboBoxVerdi->currentIndex())+", n_bianche="
                                  +to_string(ui->comboBoxBianche->currentIndex())+", n_calendari="
                                  +to_string(ui->comboBoxCalendari->currentIndex())+", n_mastelli_umido="
                                  +to_string(ui->comboBoxUmido->currentIndex())+", n_mastelli_vetro="
                                  +to_string(ui->comboBoxVetro->currentIndex())+" "+
                    "WHERE data_richiesta='"+f->dataRichiesta+"' AND cliente="+to_string(codiceCliente)+" ";
    }else if (f->ui->rBtnAzienda->isChecked()){
        stringQuery="UPDATE richiesta "
                    "SET  data_richiesta='"+ui->dateEditRichiesta->date().toString("yyyy-MM-dd").toStdString()+"', n_rosse="
                                  +to_string(ui->comboBoxRosse->currentIndex())+", n_blu="
                                  +to_string(ui->comboBoxBlu->currentIndex())+", n_verdi="
                                  +to_string(ui->comboBoxVerdi->currentIndex())+", n_bianche="
                                  +to_string(ui->comboBoxBianche->currentIndex())+", n_calendari="
                                  +to_string(ui->comboBoxCalendari->currentIndex())+", n_secchi_1100="
                                  +to_string(ui->comboBoxSecchi1100->currentIndex())+", n_secchi_240="
                                  +to_string(ui->comboBoxSecchi240->currentIndex())+" "+
                    "WHERE data_richiesta='"+f->dataRichiesta+"' AND cliente="+to_string(codiceCliente)+" ";
    }
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.clear();

    db->closeConnection();
    ui->comboBoxRosse->setStyleSheet("");
    ui->comboBoxBlu->setStyleSheet("");
    ui->comboBoxVerdi->setStyleSheet("");
    ui->comboBoxBianche->setStyleSheet("");
    ui->comboBoxCalendari->setStyleSheet("");
    ui->comboBoxUmido->setStyleSheet("");
    ui->comboBoxVetro->setStyleSheet("");
    ui->comboBoxSecchi240->setStyleSheet("");
    ui->comboBoxSecchi1100->setStyleSheet("");

    QObject::connect(this , SIGNAL( mandaModifica() ), f , SLOT(refreshRichieste()));
    emit mandaModifica();
    QObject::disconnect(this , SIGNAL( mandaModifica() ), f , SLOT(refreshRichieste()));

    error.information(0,"Info","Modifica effettuata con successo!");
}


void ModificaRichiesta::activeButtonModifica (){

   if(ui->comboBoxRosse->styleSheet().isEmpty() && ui->comboBoxBlu->styleSheet().isEmpty() &&
       ui->comboBoxVerdi->styleSheet().isEmpty() && ui->comboBoxBianche->styleSheet().isEmpty() &&
       ui->comboBoxCalendari->styleSheet().isEmpty() && ui->comboBoxUmido->styleSheet().isEmpty() &&
       ui->comboBoxVetro->styleSheet().isEmpty() && ui->comboBoxSecchi240->styleSheet().isEmpty() &&
       ui->comboBoxSecchi1100->styleSheet().isEmpty() && ui->dateEditRichiesta->styleSheet().isEmpty()){
        ui->btnSalva->setEnabled(false);
    }
        else{
        ui->btnSalva->setEnabled(true);
    }
}

