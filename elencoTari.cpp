#include "elencotari.h"
#include "ui_elencotari.h"

ElencoTari::ElencoTari(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ElencoTari)
{
    ui->setupUi(this);
}

ElencoTari::~ElencoTari()
{
    delete ui;
}

void ElencoTari::on_btnElencoEsci_clicked()
{
    this->hide();
}

void ElencoTari::on_btnCerca_clicked(){
    if (ui->comboBoxLettera->currentIndex()==0){
        error.information(0,"Attenzione!","Seleziona una lettera per effettuare la ricerca!");
    }else if(!ui->rBtnElencoAziende->isChecked() && !ui->rBtnElencoPrivato->isChecked()){
         error.information(0,"Attenzione!","Seleziona la tipologia di utenza per effettuare la ricerca!");
    }else if(ui->rBtnElencoPrivato->isChecked()){
        db = new DbConnect();
        db->openConnection();
        stringQuery="SELECT COGNOME,NOME,VIA,N_CIVICO FROM cliente WHERE TIPOLOGIA='PRIVATO' AND cognome LIKE '"+ui->comboBoxLettera->currentText().toStdString()+"%' ORDER BY COGNOME,NOME";
        query = db->executeQuery(QString::fromStdString(stringQuery));
        model = new QSqlQueryModel();
        model->setQuery(query);
        model->setHeaderData(0,Qt::Horizontal,"COGNOME");
        model->setHeaderData(1,Qt::Horizontal,"NOME");
        model->setHeaderData(2,Qt::Horizontal,"VIA");
        model->setHeaderData(3,Qt::Horizontal,"NUMERO CIVICO");
        ui->tblElencoTari->setModel(model);
        ui->tblElencoTari->resizeColumnsToContents();
        db->closeConnection();
    }else if (ui->rBtnElencoAziende->isChecked()){
        db = new DbConnect();
        db->openConnection();
        stringQuery="SELECT RAGIONE_SOCIALE,VIA,N_CIVICO FROM cliente WHERE TIPOLOGIA='AZIENDA' AND ragione_sociale LIKE '"+ui->comboBoxLettera->currentText().toStdString()+"%' ORDER BY RAGIONE_SOCIALE";
        query = db->executeQuery(QString::fromStdString(stringQuery));
        model = new QSqlQueryModel();
        model->setQuery(query);
        model->setHeaderData(0,Qt::Horizontal,"RAGIONE SOCIALE");
        model->setHeaderData(1,Qt::Horizontal,"VIA");
        model->setHeaderData(2,Qt::Horizontal,"NUMERO CIVICO");
        ui->tblElencoTari->setModel(model);
        ui->tblElencoTari->resizeColumnsToContents();
        db->closeConnection();
    }
}

