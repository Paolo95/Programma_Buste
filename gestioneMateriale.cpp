#include "gestioneMateriale.h"
#include "ui_gestioneMateriale.h"

GestioneMateriale::GestioneMateriale(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestioneMateriale)
{
    ui->setupUi(this);
    ui->btnCerca->setEnabled(false);
    ui->comboBoxTipologia->setEnabled(false);
    popolaCategoria();
}

GestioneMateriale::~GestioneMateriale()
{
    delete ui;
}

void GestioneMateriale::closeEvent (QCloseEvent *event)
{
    event->ignore();
    this->hide();
    MainMenu *menu = new MainMenu (this);
    menu->show();
}

void GestioneMateriale::on_btnEsci_clicked()
{
    MessageExitGestioneMateriale.setWindowTitle("Vuoi tornare indietro?");
    MessageExitGestioneMateriale.setText("Vuoi tornare al menù principale?");
    MessageExitGestioneMateriale.setIcon(QMessageBox::Information);
    BtnSiGestioneMateriale = MessageExitGestioneMateriale.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoGestioneMateriale = MessageExitGestioneMateriale.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitGestioneMateriale.exec();

    if (MessageExitGestioneMateriale.clickedButton()==BtnSiGestioneMateriale){
          MessageExitGestioneMateriale.close();
            this->hide();
            MainMenu *menu = new MainMenu (this);
            menu->show();
          }else{
            MessageExitGestioneMateriale.removeButton(BtnSiGestioneMateriale);
            MessageExitGestioneMateriale.removeButton(BtnSiGestioneMateriale);
            MessageExitGestioneMateriale.removeButton(BtnNoGestioneMateriale);
            MessageExitGestioneMateriale.removeButton(BtnNoGestioneMateriale);
            MessageExitGestioneMateriale.close();
}
}

void GestioneMateriale::popolaCategoria(){

    db= new DbConnect();
    db->openConnection();
    ui->comboBoxCercaCategoria->addItem("");
    stringQuery="SELECT DISTINCT categoria "
                "FROM materiale";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    while(query.next()){
        ui->comboBoxCercaCategoria->addItem(query.value(0).toString());
    }
    query.clear();
    stringQuery.clear();
    db->closeConnection();

}

void GestioneMateriale::on_comboBoxCercaCategoria_currentIndexChanged(const QString &arg1)
{
    if (arg1.isEmpty()){
        ui->btnCerca->setEnabled(false);
    }else{
        ui->btnCerca->setEnabled(true);
    }
}

void GestioneMateriale::on_btnCerca_clicked()
{
    db= new DbConnect();
    db->openConnection();
    stringQuery="SELECT *"
                "FROM materiale "
                "WHERE categoria='"+ui->comboBoxCercaCategoria->currentText().toStdString()+"'";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0,Qt::Horizontal,"CODICE MATERIALE");
    model->setHeaderData(1,Qt::Horizontal,"CATEGORIA");
    model->setHeaderData(2,Qt::Horizontal,"TIPOLOGIA");
    model->setHeaderData(3,Qt::Horizontal,"DIMENSIONE");
    ui->tblMateriale->setModel(model);
    ui->tblMateriale->resizeColumnsToContents();
    query.clear();
    stringQuery.clear();
    db->closeConnection();
}

void GestioneMateriale::on_btnPulisci_clicked()
{
    model=new QSqlQueryModel();
    ui->tblMateriale->setModel(model);
}

void GestioneMateriale::on_comboBoxCategoria_currentIndexChanged(const QString &arg1)
{
    if (arg1.isEmpty()){
        ui->comboBoxTipologia->setEnabled(false);
    }else{
        ui->comboBoxTipologia->setEnabled(true);
        popolaTipologia(arg1.toStdString());
    }
}

void GestioneMateriale::popolaTipologia(string categoria){

    ui->comboBoxTipologia->setEnabled(true);
    ui->comboBoxTipologia->clear();
    ui->comboBoxTipologia->addItem("");
    if (!categoria.compare("BUSTE")){
    ui->comboBoxTipologia->addItem("ROSSE");
    ui->comboBoxTipologia->addItem("BLU");
    ui->comboBoxTipologia->addItem("VERDI");
    ui->comboBoxTipologia->addItem("BIANCHE");
    }else if(!categoria.compare("SECCHIO") || !categoria.compare("MASTELLO") ){
        ui->comboBoxTipologia->addItem("UMIDO");
        ui->comboBoxTipologia->addItem("VETRO");
    }else if(!categoria.compare("CALENDARIO") ){
        ui->comboBoxTipologia->setEnabled(false);
    }
}

void GestioneMateriale::on_btnSalva_clicked()
{
    db= new DbConnect();
    db->openConnection();
    if (ui->comboBoxCategoria->currentIndex()!=4){
    if ( ui->comboBoxCategoria->currentIndex()==0 || ui->comboBoxTipologia->currentText().isEmpty() ||
         ui->spinBoxDimensione->value()==0 ){
        error.information(nullptr,"Attenzione!","Compila tutti i campi (la dimensione non può essere zero!");
    }
    }else if(ui->spinBoxDimensione->value()==0){
        error.information(nullptr,"Attenzione!","La dimensione non può essere zero!");
    }
    stringQuery="SELECT * "
                "FROM materiale "
                "WHERE categoria='"+ui->comboBoxCategoria->currentText().toStdString()+"'"+" AND tipologia='"+
            ui->comboBoxTipologia->currentText().toStdString()+"' AND dimensione='"+
            QString::number(ui->spinBoxDimensione->value()).toStdString()+"'";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    if(query.next()){
        error.information(nullptr,"Attenzione!","Il materiale è già nel database!");
    }else{
    stringQuery.clear();
    query.clear();
    stringQuery="INSERT INTO materiale (categoria,tipologia,dimensione) "
                "VALUES ('"+ui->comboBoxCategoria->currentText().toStdString()+"', '"+ui->comboBoxTipologia->currentText().toStdString()+
            "', '"+QString::number(ui->spinBoxDimensione->value()).toStdString()+"')";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    error.information(nullptr,"Info","Il materiale è stato inserito correttamente!");
    stringQuery.clear();
    query.clear();
    ui->comboBoxCategoria->setCurrentIndex(0);
    ui->comboBoxTipologia->setCurrentIndex(0);
    ui->spinBoxDimensione->setValue(0);
    db->closeConnection();
    }
}

void GestioneMateriale::on_btnElimina_clicked()
{
    db = new DbConnect();
    db->openConnection();
    if(ui->tblMateriale->selectionModel()->currentIndex().row()==-1){
        error.information(nullptr,"Attenzione!","Seleziona un elemento da eliminare!");
    }else{
        index = model->index(ui->tblMateriale->selectionModel()->currentIndex().row(),1,QModelIndex());
        categoriaElim = ui->tblMateriale->model()->data(index).toString().toStdString();
        index = model->index(ui->tblMateriale->selectionModel()->currentIndex().row(),2,QModelIndex());
        tipologiaElim = ui->tblMateriale->model()->data(index).toString().toStdString();
        index = model->index(ui->tblMateriale->selectionModel()->currentIndex().row(),3,QModelIndex());
        dimensioneElim = ui->tblMateriale->model()->data(index).toString().toStdString();
    }
    stringQuery="DELETE FROM materiale "
                "WHERE categoria='"+categoriaElim+"' AND tipologia='"+tipologiaElim+"' AND dimensione='"+dimensioneElim+"'";
    query = db->executeQuery(QString::fromStdString(stringQuery));
    if (db->lastError().isValid()){
        error.information(nullptr,"Attenzione","Errore nel database!\nIl materiale è presente al centro fiera e/o in biblioteca!");
    }else{
    error.information(nullptr,"Info","Il materiale è stato eliminato correttamente!");
    }
    stringQuery.clear();
    query.clear();
    db->closeConnection();
}
