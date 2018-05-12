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

void ElencoTari::on_rBtnElencoPrivato_clicked()
{
    db = new DbConnect();
    db->openConnection();
    stringQuery="SELECT COGNOME,NOME,VIA,N_CIVICO FROM cliente WHERE TIPOLOGIA='PRIVATO' ORDER BY COGNOME,NOME";
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
}

void ElencoTari::on_rBtnElencoAziende_clicked()
{
    db = new DbConnect();
    db->openConnection();
    stringQuery="SELECT RAGIONE_SOCIALE,VIA,N_CIVICO FROM cliente WHERE TIPOLOGIA='AZIENDA' ORDER BY RAGIONE_SOCIALE";
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

