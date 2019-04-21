#include "gestioneArrivi.h"
#include "ui_gestioneArrivi.h"

GestioneArrivi::GestioneArrivi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestioneArrivi)
{
    ui->setupUi(this);
    ui->dateEditDataRicerca->setDate(dataArrivoDefault);
    ui->dateEditDataArrivo->setDate(dataArrivoDefault);
    ui->rbtnCentroFiera->setChecked(true);
    ui->comboBoxCategoria->setEnabled(false);
    ui->comboBoxTipologia->setEnabled(false);
    ui->comboBoxDimensione->setEnabled(false);
    ui->dateEditDataArrivo->setEnabled(false);
    ui->spinBoxQuantita->setEnabled(false);
    ui->btnSalva->setEnabled(false);
    ui->btnModifica->setEnabled(false);
    ui->btnElimina->setEnabled(false);
}

GestioneArrivi::~GestioneArrivi()
{
    delete ui;
}

void GestioneArrivi::closeEvent (QCloseEvent *event)
{
    event->ignore();
    this->hide();
    MainMenu *menu = new MainMenu (this);
    menu->show();
}

void GestioneArrivi::on_btnEsci_clicked()
{
    MessageExitGestioneArrivi.setWindowTitle("Vuoi tornare indietro?");
    MessageExitGestioneArrivi.setText("Vuoi tornare al menù principale?");
    MessageExitGestioneArrivi.setIcon(QMessageBox::Information);
    BtnSiGestioneArrivi = MessageExitGestioneArrivi.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoGestioneArrivi = MessageExitGestioneArrivi.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitGestioneArrivi.exec();

    if (MessageExitGestioneArrivi.clickedButton()==BtnSiGestioneArrivi){
          MessageExitGestioneArrivi.close();
            this->hide();
            MainMenu *menu = new MainMenu (this);
            menu->show();
          }else{
            MessageExitGestioneArrivi.removeButton(BtnSiGestioneArrivi);
            MessageExitGestioneArrivi.removeButton(BtnSiGestioneArrivi);
            MessageExitGestioneArrivi.removeButton(BtnNoGestioneArrivi);
            MessageExitGestioneArrivi.removeButton(BtnNoGestioneArrivi);
            MessageExitGestioneArrivi.close();
}
}

void GestioneArrivi::on_btnCerca_clicked()
{
    db= new DbConnect();
    db->openConnection();
    if (ui->rbtnCentroFiera->isChecked()){
    stringQuery="SELECT data_arrivo,cod_materiale,categoria,tipologia,dimensione,quantita "
                "FROM materiale m, centro_fiera cf "
                "WHERE m.cod_materiale=cf.materiale AND data_arrivo BETWEEN '"
            +ui->dateEditDataRicerca->date().toString("yyyy-MM-dd").toStdString()+"' AND CURDATE()";
    }else if(ui->rbtnBiblioteca->isChecked()){
        stringQuery="SELECT data_arrivo,cod_materiale,categoria,tipologia,dimensione,quantita "
                    "FROM materiale m, biblioteca b "
                    "WHERE m.cod_materiale=b.materiale AND data_arrivo BETWEEN '"
                +ui->dateEditDataRicerca->date().toString("yyyy-MM-dd").toStdString()+"' AND CURDATE()";
    }
    query = db->executeQuery(QString::fromStdString(stringQuery));
    model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0,Qt::Horizontal,"DATA");
    model->setHeaderData(1,Qt::Horizontal,"CODICE MATERIALE");
    model->setHeaderData(2,Qt::Horizontal,"CATEGORIA");
    model->setHeaderData(3,Qt::Horizontal,"TIPOLOGIA");
    model->setHeaderData(4,Qt::Horizontal,"DIMENSIONE");
    model->setHeaderData(5,Qt::Horizontal,"QUANTITA'");
    ui->tblArrivi->setModel(model);
    ui->tblArrivi->resizeColumnsToContents();
    query.clear();
    stringQuery.clear();
    db->closeConnection();
    ui->btnModifica->setEnabled(true);
    ui->btnElimina->setEnabled(true);
}

void GestioneArrivi::on_btnPulisci_clicked()
{
    model=new QSqlQueryModel();
    ui->tblArrivi->setModel(model);
}

void GestioneArrivi::popolaCategoria(){

    db= new DbConnect();
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

void GestioneArrivi::popolaTipologia(string categoria){

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

void GestioneArrivi::on_comboBoxTipologia_currentIndexChanged(const QString &tipologiasel)
{
    ui->comboBoxDimensione->clear();
    if (ui->comboBoxTipologia->currentIndex()!=0){
         ui->comboBoxDimensione->setEnabled(true);
         popolaDimensione(ui->comboBoxCategoria->currentText().toStdString(),tipologiasel.toStdString());
    }else{
        ui->comboBoxDimensione->setEnabled(false);
    }
}

void GestioneArrivi::popolaDimensione(string categoria,string tipologia){

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


void GestioneArrivi::on_comboBoxCategoria_currentIndexChanged(const QString &categoriaSel)
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

void GestioneArrivi::on_btnModifica_clicked()
{
    if(ui->tblArrivi->selectionModel()->currentIndex().row()==-1){
        error.information(nullptr,"Attenzione!","Seleziona un elemento da modificare!");
    }else{
        ui->comboBoxCategoria->setEnabled(true);
        ui->comboBoxTipologia->setEnabled(true);
        ui->comboBoxDimensione->setEnabled(true);
        ui->dateEditDataArrivo->setEnabled(true);
        ui->spinBoxQuantita->setEnabled(true);
        if (ui->comboBoxCategoria->count()<=0){
        index = model->index(ui->tblArrivi->selectionModel()->currentIndex().row(),0,QModelIndex());
        ui->dateEditDataArrivo->setDate(ui->tblArrivi->model()->data(index).toDate());
        ui->btnSalva->setEnabled(true);
        popolaCategoria();
        }
    }
}

void GestioneArrivi::on_btnSalva_clicked()
{
    if ( ui->dateEditDataArrivo->date()>QDate::currentDate() || ui->comboBoxCategoria->currentIndex()==0 ||
        ui->comboBoxDimensione->currentIndex()==0 || ui->comboBoxTipologia->currentIndex()==0 ||
            ui->spinBoxQuantita->value()==0 ){
        error.information(nullptr,"Attenzione!","La data inserita è superiore alla data odierna e/o "
                                            "non hai selezionato una categoria/tipologia/dimensione e/o "
                                            "la quantità è zero!");
    }else{
        db=new DbConnect();
        db->openConnection();
        stringQuery="SELECT cod_materiale "
                    "FROM materiale "
                    "WHERE categoria='"+ui->comboBoxCategoria->currentText().toStdString()+"' AND tipologia='"
                            +ui->comboBoxTipologia->currentText().toStdString()+"' AND dimensione='"
                            +ui->comboBoxDimensione->currentText().toStdString()+"'";
         query = db->executeQuery(QString::fromStdString(stringQuery));
         query.next();
         codiceMateriale=query.value(0).toString().toStdString();
         query.clear();
         stringQuery.clear();
         if ( ui->rbtnBiblioteca->isChecked() ){
                stringQuery="SELECT * "
                            "FROM biblioteca "
                            "WHERE materiale='"+codiceMateriale+"' AND data_arrivo='"+ui->dateEditDataArrivo->date().toString("yyyy-MM-dd").toStdString()
                                +"' AND quantita='"+QString::number(ui->spinBoxQuantita->value()).toStdString()+"'";
            query = db->executeQuery(QString::fromStdString(stringQuery));
            if (query.size()>0){
                error.information(nullptr,"Attenzione!","L'ordine è già presente nel database!");
            }else{
                query.clear();
                stringQuery.clear();
                stringQuery="UPDATE biblioteca "
                            "SET materiale='"+codiceMateriale+"', data_arrivo='"+ui->dateEditDataArrivo->date().toString("yyyy-MM-dd").toStdString()+
                                "', quantita="+QString::number(ui->spinBoxQuantita->value()).toStdString()+"";
                query = db->executeQuery(QString::fromStdString(stringQuery));
                error.information(nullptr,"Info","La modifica è stata effettuata correttamente!");
            }
            }else if ( ui->rbtnCentroFiera->isChecked() ){
             query.clear();
             stringQuery.clear();
             stringQuery="SELECT * "
                     "FROM centro_fiera "
                     "WHERE materiale='"+codiceMateriale+"' AND data_arrivo='"+ui->dateEditDataArrivo->date().toString("yyyy-MM-dd").toStdString()
                         +"' AND quantita='"+QString::number(ui->spinBoxQuantita->value()).toStdString()+"'";
         query = db->executeQuery(QString::fromStdString(stringQuery));
         query.next();
         if (query.size()>0){
             error.information(nullptr,"Attenzione!","L'ordine è già presente nel database!");
         }else{
             query.clear();
             stringQuery.clear();
             stringQuery="UPDATE centro_fiera "
                         "SET materiale='"+codiceMateriale+"', data_arrivo='"+ui->dateEditDataArrivo->date().toString("yyyy-MM-dd").toStdString()+
                             "', quantita="+QString::number(ui->spinBoxQuantita->value()).toStdString()+"";
             query = db->executeQuery(QString::fromStdString(stringQuery));
             error.information(nullptr,"Info","La modifica è stata effettuata correttamente!");
         }
         }
}
query.clear();
stringQuery.clear();
this->on_btnCerca_clicked();
}

void GestioneArrivi::on_btnElimina_clicked()
{
    if(ui->tblArrivi->selectionModel()->currentIndex().row()==-1){
        error.information(nullptr,"Attenzione!","Seleziona un elemento da eliminare!");
    }else{
        index = model->index(ui->tblArrivi->selectionModel()->currentIndex().row(),0,QModelIndex());
        dataEliminazione=ui->tblArrivi->model()->data(index).toString().toStdString();
        index = model->index(ui->tblArrivi->selectionModel()->currentIndex().row(),1,QModelIndex());
        codiceMateriale=ui->tblArrivi->model()->data(index).toString().toStdString();
        index = model->index(ui->tblArrivi->selectionModel()->currentIndex().row(),5,QModelIndex());
        quantitaEliminazione=ui->tblArrivi->model()->data(index).toString().toStdString();
        if (ui->rbtnBiblioteca->isChecked()){
        db=new DbConnect();
        db->openConnection();
        stringQuery="DELETE FROM biblioteca "
                    "WHERE materiale='"+codiceMateriale+"' AND data_arrivo='"+dataEliminazione+"' AND quantita='"+
                quantitaEliminazione+"'";
        query = db->executeQuery(QString::fromStdString(stringQuery));
        error.information(nullptr,"Info","Arrivo eliminato correttamente!");
        }else if (ui->rbtnCentroFiera->isChecked()){
            db=new DbConnect();
            db->openConnection();
            stringQuery="DELETE FROM centro_fiera "
                        "WHERE materiale='"+codiceMateriale+"' AND data_arrivo='"+dataEliminazione+"' AND quantita='"+
                    quantitaEliminazione+"'";
            query = db->executeQuery(QString::fromStdString(stringQuery));
            error.information(nullptr,"Info","Arrivo eliminato correttamente!");
        }
        query.clear();
        stringQuery.clear();
        db->closeConnection();
    }
}
