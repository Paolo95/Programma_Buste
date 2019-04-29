#include "centroFiera.h"
#include "ui_centroFiera.h"

CentroFiera::CentroFiera(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CentroFiera)
{
    ui->setupUi(this);
    ui->btnElimina->setEnabled(false);    
    ui->commandLinkBtnConferma->setEnabled(false);
    popolaDati();
    popolaCategoria();
    impostaTabellaArrivo();
}

CentroFiera::~CentroFiera()
{
    delete ui;
}

void CentroFiera::closeEvent (QCloseEvent *event)
{
    event->ignore();
    this->hide();
    MainMenu *menu = new MainMenu (this);
    menu->show();
}

void CentroFiera::on_btnEsci_clicked()
{
    MessageExitCentroFiera.setWindowTitle("Vuoi tornare indietro?");
    MessageExitCentroFiera.setText("Vuoi tornare al menù principale?");
    MessageExitCentroFiera.setIcon(QMessageBox::Information);
    BtnSiCentroFiera = MessageExitCentroFiera.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoCentroFiera = MessageExitCentroFiera.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitCentroFiera.exec();

    if (MessageExitCentroFiera.clickedButton()==BtnSiCentroFiera){
          MessageExitCentroFiera.close();
            this->hide();
             MainMenu *menu = new MainMenu (this);
            menu->show();
          }else{
            MessageExitCentroFiera.removeButton(BtnSiCentroFiera);
            MessageExitCentroFiera.removeButton(BtnNoCentroFiera);
            MessageExitCentroFiera.close();

}
}

int CentroFiera::numero_buste_cf(string tipologia){

    int risultato=0;
    db = new DbConnect();
    db->openConnection();
    stringQuery="CREATE VIEW moltiplicazioni AS "
                "SELECT (m.dimensione * cf.quantita) as risultati "
                "FROM materiale m, centro_fiera cf "
                "WHERE m.cod_materiale=cf.materiale AND m.tipologia='"+tipologia+"' ";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    stringQuery="SELECT SUM(risultati) "
                "FROM moltiplicazioni";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    risultato=query.value(0).toInt();
    stringQuery="DROP VIEW moltiplicazioni";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    stringQuery.clear();
    query.clear();
    db->closeConnection();
    return risultato;
}

int CentroFiera::numero_buste_biblioteca(string tipologia){

    int risultato=0;
    db = new DbConnect();
    db->openConnection();
    stringQuery="CREATE VIEW moltiplicazioni AS "
                "SELECT (m.dimensione * b.quantita) as risultati "
                "FROM materiale m, biblioteca b "
                "WHERE m.cod_materiale=b.materiale AND m.tipologia='"+tipologia+"' ";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    stringQuery="SELECT SUM(risultati) "
                "FROM moltiplicazioni";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    risultato=query.value(0).toInt();
    stringQuery="DROP VIEW moltiplicazioni";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    stringQuery.clear();
    query.clear();
    db->closeConnection();
    return risultato;
}

int CentroFiera::numero_bidoni_biblioteca(string categoria, string tipologia){

    int risultato=0;
    db = new DbConnect();
    db->openConnection();
    stringQuery="SELECT SUM(quantita) as risultati "
                "FROM materiale m, biblioteca b "
                "WHERE m.cod_materiale=b.materiale AND m.categoria='"+categoria+"' AND m.tipologia='"+tipologia+"' ";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    risultato=query.value(0).toInt();
    stringQuery.clear();
    query.clear();
    db->closeConnection();
    return risultato;
}

int CentroFiera::numero_bidoni_cf(string categoria, string tipologia){

    int risultato=0;
    db = new DbConnect();
    db->openConnection();
    stringQuery="SELECT SUM(quantita) as risultati "
                "FROM materiale m, centro_fiera cf "
                "WHERE m.cod_materiale=cf.materiale AND m.categoria='"+categoria+"' AND m.tipologia='"+tipologia+"' ";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    risultato=query.value(0).toInt();
    stringQuery.clear();
    query.clear();
    db->closeConnection();
    return risultato;
}

int CentroFiera::numero_bidoni_biblioteca(string categoria, string tipologia, string dimensione){

    int risultato=0;
    db = new DbConnect();
    db->openConnection();
    stringQuery="SELECT SUM(quantita) as risultati "
                "FROM materiale m, biblioteca b "
                "WHERE m.cod_materiale=b.materiale AND m.categoria='"+categoria+"' AND m.tipologia='"+tipologia+"' AND m.dimensione='"+dimensione+"'";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    risultato=query.value(0).toInt();
    stringQuery.clear();
    query.clear();
    db->closeConnection();
    return risultato;
}

int CentroFiera::numero_bidoni_cf(string categoria, string tipologia ,string dimensione){

    int risultato=0;
    db = new DbConnect();
    db->openConnection();
    stringQuery="SELECT SUM(quantita) as risultati "
                "FROM materiale m, centro_fiera cf "
                "WHERE m.cod_materiale=cf.materiale AND m.categoria='"+categoria+"' AND m.tipologia='"+tipologia+"' AND m.dimensione='"+dimensione+"'";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    risultato=query.value(0).toInt();
    stringQuery.clear();
    query.clear();
    db->closeConnection();
    return risultato;
}


int CentroFiera::numero_calendari_biblioteca(string categoria){

    int risultato=0;
    db = new DbConnect();
    db->openConnection();
    stringQuery="SELECT SUM(quantita) as risultati "
                "FROM materiale m, biblioteca b "
                "WHERE m.cod_materiale=b.materiale AND m.categoria='"+categoria+"'";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    risultato=query.value(0).toInt();
    stringQuery.clear();
    query.clear();
    db->closeConnection();
    return risultato;
}

int CentroFiera::numero_calendari_cf(string categoria){

    int risultato=0;
    db = new DbConnect();
    db->openConnection();
    stringQuery="SELECT SUM(quantita) as risultati "
                "FROM materiale m, centro_fiera cf "
                "WHERE m.cod_materiale=cf.materiale AND m.categoria='"+categoria+"'";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    risultato=query.value(0).toInt();
    stringQuery.clear();
    query.clear();
    db->closeConnection();
    return risultato;
}

QString CentroFiera::dataUltimoArrivo(){

    QString data;
    db=new DbConnect();
    db->openConnection();
    stringQuery="SELECT data_arrivo "
                "FROM centro_fiera "
                "ORDER BY data_arrivo DESC "
                "LIMIT 1";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    data=query.value(0).toString();
    QDate dataQ=QDate::fromString(data,"yyyy-MM-dd");
    query.clear();
    stringQuery.clear();
    db->closeConnection();
    return dataQ.toString("dd-MM-yyyy");
}

void CentroFiera::popolaCategoria(){
    db=new DbConnect();
    db->openConnection();
    ui->comboBoxCategoria->addItem("");
    stringQuery="SELECT DISTINCT categoria "
                "FROM materiale";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    while(query.next()){
        ui->comboBoxCategoria->addItem(query.value(0).toString());
    }
    query.clear();
    stringQuery.clear();
    db->closeConnection();
}

void CentroFiera::on_comboBoxCategoria_currentIndexChanged(const QString &categoriaSel)
{
    ui->comboBoxTipologia->clear();
    ui->comboBoxDimensione->clear();
    if (ui->comboBoxCategoria->currentIndex()!=0){
         ui->comboBoxTipologia->setEnabled(true);
         ui->comboBoxDimensione->setEnabled(true);
         popolaTipologia(categoriaSel.toStdString());
    }else{
        ui->comboBoxTipologia->setEnabled(false);
        ui->comboBoxDimensione->setEnabled(false);
    }
}

void CentroFiera::popolaTipologia(string categoria){

    db=new DbConnect();
    db->openConnection();
    ui->comboBoxTipologia->addItem("");
    stringQuery="SELECT DISTINCT tipologia "
                "FROM materiale "
                "WHERE categoria='"+categoria+"'";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    while(query.next()){
        ui->comboBoxTipologia->addItem(query.value(0).toString());
    }
    query.clear();
    stringQuery.clear();
    db->closeConnection();
}

void CentroFiera::on_comboBoxTipologia_currentIndexChanged(const QString &tipologiaSel)
{
    ui->comboBoxDimensione->clear();
    if (ui->comboBoxTipologia->currentIndex()!=0){
         ui->comboBoxDimensione->setEnabled(true);
         popolaDimensione(ui->comboBoxCategoria->currentText().toStdString(),tipologiaSel.toStdString());
    }else{
        ui->comboBoxDimensione->setEnabled(false);
    }
}

void CentroFiera::popolaDimensione(string categoria,string tipologia){

    db=new DbConnect();
    db->openConnection();
    ui->comboBoxDimensione->addItem("");
    stringQuery="SELECT DISTINCT dimensione "
                "FROM materiale "
                "WHERE tipologia='"+tipologia+"' AND categoria='"+categoria+"'";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    while(query.next()){
        ui->comboBoxDimensione->addItem(query.value(0).toString());
    }
    query.clear();
    stringQuery.clear();
    db->closeConnection();
}

void CentroFiera::on_btnAggiungi_clicked()
{
    if (ui->spinBoxQuantita->value()!=0 && ui->comboBoxCategoria->currentIndex()!=0 &&
            ui->comboBoxDimensione->currentIndex()!=0 && ui->comboBoxTipologia->currentIndex()!=0){
    model->insertRow(currentRow);
    model->setData(model->index(currentRow,0),ui->spinBoxQuantita->value());
    model->setData(model->index(currentRow,1),ui->comboBoxCategoria->currentText());
    model->setData(model->index(currentRow,2),ui->comboBoxTipologia->currentText());
    model->setData(model->index(currentRow,3),ui->comboBoxDimensione->currentText());
    model->setHeaderData(currentRow+1,Qt::Vertical,QString::number(currentRow+1));
    ui->tblArrivo->setModel(model);
    ui->tblArrivo->resizeColumnsToContents();
    currentRow++;
    ui->btnElimina->setEnabled(true);
    ui->spinBoxQuantita->setValue(0);
    ui->comboBoxCategoria->setCurrentIndex(0);
    ui->comboBoxTipologia->setCurrentIndex(0);
    ui->comboBoxDimensione->setCurrentIndex(0);
    ui->commandLinkBtnConferma->setEnabled(true);
    }else{
         error.information(nullptr,"Attenzione!","La quantità deve essere diversa da zero e tutti i campi devono essere compilati!");
    }
}

void CentroFiera::impostaTabellaArrivo(){

    model = new QStandardItemModel(this);
    model->insertColumns(0,4);
    model->setHeaderData(0,Qt::Horizontal,"QUANTITA'");
    model->setHeaderData(1,Qt::Horizontal,"CATEGORIA");
    model->setHeaderData(2,Qt::Horizontal,"TIPOLOGIA");
    model->setHeaderData(3,Qt::Horizontal,"DIMENSIONE");

}

void CentroFiera::on_btnElimina_clicked()
{
    model->removeRow(ui->tblArrivo->selectionModel()->currentIndex().row());
    currentRow--;
    if(currentRow==0){
        ui->btnElimina->setEnabled(false);
        ui->commandLinkBtnConferma->setEnabled(false);
    }
}


void CentroFiera::on_commandLinkBtnConferma_clicked()
{
    db= new DbConnect();
    db->openConnection();
    for (int i=0; i<currentRow ; i++){
    stringQuery="SELECT cod_materiale "
                "FROM materiale "
                "WHERE categoria='"+ui->tblArrivo->model()->data(ui->tblArrivo->model()->index(i,1)).toString().toStdString()+
            "' AND tipologia='"+ui->tblArrivo->model()->data(ui->tblArrivo->model()->index(i,2)).toString().toStdString()+
            "' AND dimensione='"+ui->tblArrivo->model()->data(ui->tblArrivo->model()->index(i,3)).toString().toStdString()+"'";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    codiceMaterialeIns=query.value(0).toString().toStdString();
    quantitaIns=ui->tblArrivo->model()->data(ui->tblArrivo->model()->index(i,0)).toString().toStdString();
    stringQuery.clear();
    stringQuery="INSERT INTO centro_fiera "
                "VALUES ("+codiceMaterialeIns+" , '"+ui->dateEditArrivo->date().toString("yyyy-MM-dd").toStdString()+"', "+quantitaIns+")";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    if (db->lastError().isValid()){
        error.information(nullptr,"Attenzione","L'ordine "+QString::number(i+1)+" non è stato registrato (l'arrivo è già presente, oppure"
                                                                                " hai inserito lo stesso materiale con quantità diverse)");
        QBrush color;
        color.setColor(Qt::red);
        ui->tblArrivo->model()->setData(ui->tblArrivo->model()->index(i,0),color,Qt::ForegroundRole);
        ui->tblArrivo->model()->setData(ui->tblArrivo->model()->index(i,1),color,Qt::ForegroundRole);
        ui->tblArrivo->model()->setData(ui->tblArrivo->model()->index(i,2),color,Qt::ForegroundRole);
        ui->tblArrivo->model()->setData(ui->tblArrivo->model()->index(i,3),color,Qt::ForegroundRole);
    }else{
        QBrush color;
        color.setColor(Qt::green);
        ui->tblArrivo->model()->setData(ui->tblArrivo->model()->index(i,0),color,Qt::ForegroundRole);
        ui->tblArrivo->model()->setData(ui->tblArrivo->model()->index(i,1),color,Qt::ForegroundRole);
        ui->tblArrivo->model()->setData(ui->tblArrivo->model()->index(i,2),color,Qt::ForegroundRole);
        ui->tblArrivo->model()->setData(ui->tblArrivo->model()->index(i,3),color,Qt::ForegroundRole);
    }
    }

    error.information(nullptr,"Info","Operazione terminata!");
    ui->btnElimina->setEnabled(false);
    ui->commandLinkBtnConferma->setEnabled(false);
    stringQuery.clear();
    query.clear();
    db->closeConnection();
    popolaDati();
}

void CentroFiera::on_btnPulisci_clicked()
{
    while(currentRow>0){
        model->removeRow(currentRow-1);
        currentRow--;
    }
    ui->btnElimina->setEnabled(false);
    ui->commandLinkBtnConferma->setEnabled(false);
    ui->tblArrivo->setModel(model);
}

void CentroFiera::popolaDati(){

    int dato=numero_buste_cf("ROSSE")-numero_buste_biblioteca("ROSSE");
    ui->txtRosse->setText(QString::number(dato));
    dato=numero_buste_cf("BLU")-numero_buste_biblioteca("BLU");
    ui->txtBlu->setText(QString::number(dato));
    dato=numero_buste_cf("BIANCHE")-numero_buste_biblioteca("BIANCHE");
    ui->txtBianche->setText(QString::number(dato));
    dato=numero_buste_cf("VERDI")-numero_buste_biblioteca("VERDI");
    ui->txtVerdi->setText(QString::number(dato));
    dato=numero_bidoni_cf("MASTELLO","UMIDO")-numero_bidoni_biblioteca("MASTELLO","UMIDO");
    ui->txtMastelliUmido->setText(QString::number(dato));
    dato=numero_bidoni_cf("MASTELLO","VETRO")-numero_bidoni_biblioteca("MASTELLO","VETRO");
    ui->txtMastelliVetro->setText(QString::number(dato));
    dato=numero_bidoni_cf("SECCHIO","UMIDO","240")-numero_bidoni_biblioteca("SECCHIO","UMIDO","240");
    ui->txtSecchiUmido240->setText(QString::number(dato));
    dato=numero_bidoni_cf("SECCHIO","UMIDO","360")-numero_bidoni_biblioteca("SECCHIO","UMIDO","360");
    ui->txtSecchiUmido360->setText(QString::number(dato));
    dato=numero_bidoni_cf("SECCHIO","VETRO","240")-numero_bidoni_biblioteca("SECCHIO","VETRO","240");
    ui->txtSecchiVetro240->setText(QString::number(dato));
    dato=numero_bidoni_cf("SECCHIO","VETRO","360")-numero_bidoni_biblioteca("SECCHIO","VETRO","360");
    ui->txtSecchiVetro360->setText(QString::number(dato));
    dato=numero_calendari_cf("CALENDARI")-numero_calendari_biblioteca("CALENDARI");
    ui->txtCalendari->setText(QString::number(dato));
    ui->lblDataArrivo->setText(dataUltimoArrivo());
    ui->dateEditArrivo->setDate(dataArrivoDefault);

}

void CentroFiera::on_btnVaiArrivi_clicked()
{
    GestioneArrivi* ga= new GestioneArrivi();
    ga->show();
    this->hide();
}
