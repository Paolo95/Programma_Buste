#include "biblioteca.h"
#include "ui_biblioteca.h"

Biblioteca::Biblioteca(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Biblioteca)
{
    ui->setupUi(this);
    ui->btnElimina->setEnabled(false);
    ui->commandLinkBtnConferma->setEnabled(false);
    popolaCategoria();
    popolaDati();
    impostaTabellaArrivo();
}

Biblioteca::~Biblioteca()
{
    delete ui;
}

void Biblioteca::on_btnEsci_clicked()
{
    MessageExitBiblioteca.setWindowTitle("Vuoi tornare indietro?");
    MessageExitBiblioteca.setText("Vuoi tornare al menù principale?");
    MessageExitBiblioteca.setIcon(QMessageBox::Information);
    BtnSiBiblioteca = MessageExitBiblioteca.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoBiblioteca = MessageExitBiblioteca.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitBiblioteca.exec();

    if (MessageExitBiblioteca.clickedButton()==BtnSiBiblioteca){
          MessageExitBiblioteca.close();
            this->hide();
             MainMenu *menu = new MainMenu (this);
            menu->show();
          }else{
            MessageExitBiblioteca.removeButton(BtnSiBiblioteca);
            MessageExitBiblioteca.removeButton(BtnNoBiblioteca);
            MessageExitBiblioteca.close();

}
}

void Biblioteca::popolaCategoria(){

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

QString Biblioteca::dataUltimoArrivo(){

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

int Biblioteca::numero_buste_biblioteca(string tipologia){

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

int Biblioteca::numero_richieste(string tipologia){

    int risultato=0;
    db = new DbConnect();
    db->openConnection();
    stringQuery="SELECT SUM("+tipologia+") "
                "FROM richiesta ";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    risultato=query.value(0).toInt();
    stringQuery.clear();
    query.clear();
    db->closeConnection();
    return risultato;
}

int Biblioteca::numero_calendari_biblioteca(string categoria){

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


int Biblioteca::numero_bidoni_biblioteca(string categoria, string tipologia){

    int risultato=0;
    db = new DbConnect();
    db->openConnection();
    stringQuery="SELECT SUM(quantita) as risultati "
                "FROM materiale m, biblioteca b "
                "WHERE m.cod_materiale=b.materiale AND m.categoria='"+categoria+"' AND m.tipologia='"+tipologia+"'";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    query.next();
    risultato=query.value(0).toInt();
    stringQuery.clear();
    query.clear();
    db->closeConnection();
    return risultato;
}

void Biblioteca::popolaTipologia(string categoria){

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

void Biblioteca::popolaDimensione(string categoria,string tipologia){

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

void Biblioteca::on_comboBoxCategoria_currentIndexChanged(const QString &categoriaSel)
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

void Biblioteca::on_comboBoxTipologia_currentIndexChanged(const QString &tipologiaSel)
{
    ui->comboBoxDimensione->clear();
    if (ui->comboBoxTipologia->currentIndex()!=0){
         ui->comboBoxDimensione->setEnabled(true);
         popolaDimensione(ui->comboBoxCategoria->currentText().toStdString(),tipologiaSel.toStdString());
    }else{
        ui->comboBoxDimensione->setEnabled(false);
    }
}

void Biblioteca::popolaDati(){

    int dato=numero_buste_biblioteca("ROSSE")-numero_richieste("n_rosse");
    ui->txtRosse->setText(QString::number(dato));
    dato=numero_buste_biblioteca("BLU")-numero_richieste("n_blu");
    ui->txtBlu->setText(QString::number(dato));
    dato=numero_buste_biblioteca("BIANCHE")-numero_richieste("n_bianche");
    ui->txtBianche->setText(QString::number(dato));
    dato=numero_buste_biblioteca("VERDI")-numero_richieste("n_verdi");
    ui->txtVerdi->setText(QString::number(dato));
    dato=numero_calendari_biblioteca("CALENDARIO")-numero_richieste("n_calendari");
    ui->txtCalendari->setText(QString::number(dato));
    dato=numero_bidoni_biblioteca("MASTELLO","UMIDO")-numero_richieste("n_mastelli_umido");
    ui->txtMastelliUmido->setText(QString::number(dato));
    dato=numero_bidoni_biblioteca("MASTELLO","VETRO")-numero_richieste("n_mastelli_vetro");
    ui->txtMastelliVetro->setText(QString::number(dato));
    ui->lblDataArrivo->setText(dataUltimoArrivo());
    ui->dateEditArrivo->setDate(dataArrivoDefault);
}


void Biblioteca::on_btnPulisci_clicked()
{
    while(currentRow>0){
        model->removeRow(currentRow-1);
        currentRow--;
    }
    ui->btnElimina->setEnabled(false);
    ui->commandLinkBtnConferma->setEnabled(false);
    ui->tblArrivo->setModel(model);
}

void Biblioteca::on_btnElimina_clicked()
{
    model->removeRow(ui->tblArrivo->selectionModel()->currentIndex().row());
    currentRow--;
    if(currentRow==0){
        ui->btnElimina->setEnabled(false);
        ui->commandLinkBtnConferma->setEnabled(false);
    }
}

void Biblioteca::on_btnAggiungi_clicked()
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

void Biblioteca::impostaTabellaArrivo(){

    model = new QStandardItemModel(this);
    model->insertColumns(0,4);
    model->setHeaderData(0,Qt::Horizontal,"QUANTITA'");
    model->setHeaderData(1,Qt::Horizontal,"CATEGORIA");
    model->setHeaderData(2,Qt::Horizontal,"TIPOLOGIA");
    model->setHeaderData(3,Qt::Horizontal,"DIMENSIONE");

}

void Biblioteca::on_btnVaiArrivi_clicked()
{
    GestioneArrivi* ga= new GestioneArrivi();
    ga->show();
    this->hide();
}

void Biblioteca::on_commandLinkBtnConferma_clicked()
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
    stringQuery="INSERT INTO biblioteca "
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
