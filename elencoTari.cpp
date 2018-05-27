#include "elencotari.h"
#include "ui_elencotari.h"

ElencoTari::ElencoTari(Consegna_Materiale* m, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ElencoTari)
{
    ui->setupUi(this);
    ui->btnElencoPassa->setEnabled(false);
    n=m;
    if(n->ui->rBtnPrivato->isChecked()){
        ui->rBtnElencoPrivato->setChecked(true);
        ui->rBtnElencoPrivato->setEnabled(false);
        ui->rBtnElencoAziende->setEnabled(false);
    }else if (n->ui->rBtnAzienda->isChecked()){
        ui->rBtnElencoAziende->setChecked(true);
        ui->rBtnElencoPrivato->setEnabled(false);
        ui->rBtnElencoAziende->setEnabled(false);
    }

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
    }else if(ui->rBtnElencoPrivato->isChecked()){
        ui->btnElencoPassa->setEnabled(true);
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
        ui->btnElencoPassa->setEnabled(true);
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

void ElencoTari::on_btnElencoPassa_clicked(){

    if (ui->tblElencoTari->selectionModel()->currentIndex().row()==-1){
        error.information(0,"Attenzione!","Devi selezionare un cittadino dalla lista!");
    }else{
            if (ui->rBtnElencoPrivato->isChecked()){
                index = model->index(ui->tblElencoTari->selectionModel()->currentIndex().row(),0,QModelIndex());
                cognome = ui->tblElencoTari->model()->data(index).toString();
                index = model->index(ui->tblElencoTari->selectionModel()->currentIndex().row(),1,QModelIndex());
                nome = ui->tblElencoTari->model()->data(index).toString();
                index = model->index(ui->tblElencoTari->selectionModel()->currentIndex().row(),2,QModelIndex());
                via = ui->tblElencoTari->model()->data(index).toString();
                index = model->index(ui->tblElencoTari->selectionModel()->currentIndex().row(),3,QModelIndex());
                civico = ui->tblElencoTari->model()->data(index).toString();
                this->hide();
                QObject::connect(this , SIGNAL( mandaValoriPrivato(QString,QString,QString,QString) ), n , SLOT(setValoriPrivato(QString,QString,QString,QString)));
                emit mandaValoriPrivato(cognome,nome,via,civico);
                QObject::disconnect(this , SIGNAL( mandaValoriPrivato(QString,QString,QString,QString) ), n , SLOT(setValoriPrivato(QString,QString,QString,QString)));
            }else if (ui->rBtnElencoAziende->isChecked()){
                index = model->index(ui->tblElencoTari->selectionModel()->currentIndex().row(),0,QModelIndex());
                ragioneSociale = ui->tblElencoTari->model()->data(index).toString();
                index = model->index(ui->tblElencoTari->selectionModel()->currentIndex().row(),1,QModelIndex());
                via = ui->tblElencoTari->model()->data(index).toString();
                index = model->index(ui->tblElencoTari->selectionModel()->currentIndex().row(),2,QModelIndex());
                civico = ui->tblElencoTari->model()->data(index).toString();
                this->hide();
                QObject::connect(this , SIGNAL( mandaValoriAzienda(QString,QString,QString) ), n , SLOT(setValoriAzienda(QString,QString,QString)));
                emit mandaValoriAzienda(ragioneSociale,via,civico);
                QObject::disconnect(this , SIGNAL( mandaValoriAzienda(QString,QString,QString) ), n , SLOT(setValoriAzienda(QString,QString,QString)));
             }
    }


}

