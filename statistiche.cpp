#include "statistiche.h"
#include "ui_statistiche.h"

Statistiche::Statistiche(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Statistiche)
{
    ui->setupUi(this);
}

Statistiche::~Statistiche()
{
    delete ui;
}

void Statistiche::on_btnEsci_clicked()
{
    MessageExitStatistiche.setWindowTitle("Vuoi uscire?");
    MessageExitStatistiche.setText("Vuoi uscire dal programma?");
    MessageExitStatistiche.setIcon(QMessageBox::Information);
    BtnSiStatistiche = MessageExitStatistiche.addButton(QObject::tr("Si"), QMessageBox::YesRole);
    BtnNoStatistiche = MessageExitStatistiche.addButton(QObject::tr("No"), QMessageBox::NoRole);
    MessageExitStatistiche.exec();

    if (MessageExitStatistiche.clickedButton()==BtnSiStatistiche){
          MessageExitStatistiche.close();
          this->hide();
          MainMenu *menu = new MainMenu (this);
          menu->show();
          }else{
          MessageExitStatistiche.removeButton(BtnSiStatistiche);
          MessageExitStatistiche.removeButton(BtnNoStatistiche);
          MessageExitStatistiche.close();
}
}

void Statistiche::closeEvent (QCloseEvent *event)
{
    event->ignore();
    this->hide();
    MainMenu *menu = new MainMenu (this);
    menu->show();
}

void Statistiche::on_btnCerca_clicked()
{
    if ( !ui->rBtnElencoAziende->isChecked() && !ui->rBtnElencoPrivato->isChecked() && ui->comboBoxLettera->currentIndex()==0){
        error.information(nullptr,"Attenzione!","Devi selezionare una lettera dall'elenco e/o selezionare tra "
                                                "Centro Fiera e Biblioteca");
    }else if(ui->rBtnElencoPrivato->isChecked()){
        db = new DbConnect();
        db->openConnection();
        stringQuery="SELECT COGNOME,NOME,VIA,N_CIVICO "
                    "FROM cliente c, richiesta r "
                    "WHERE c.tipologia='PRIVATO' AND c.id_cliente=r.cliente "
                    "AND c.cognome LIKE '"
                +ui->comboBoxLettera->currentText().toStdString()+"%' ORDER BY COGNOME,NOME";
        query = db->executeQuery(QString::fromStdString(stringQuery));
        model = new QSqlQueryModel();
        model->setQuery(query);
        model->setHeaderData(0,Qt::Horizontal,"COGNOME");
        model->setHeaderData(1,Qt::Horizontal,"NOME");
        model->setHeaderData(2,Qt::Horizontal,"VIA");
        model->setHeaderData(3,Qt::Horizontal,"NUMERO CIVICO");
        ui->tblElenco->setModel(model);
        ui->tblElenco->resizeColumnsToContents();
        db->closeConnection();
    }else if (ui->rBtnElencoAziende->isChecked()){
        db = new DbConnect();
        db->openConnection();
        stringQuery="SELECT RAGIONE_SOCIALE,VIA,N_CIVICO "
                    "FROM cliente c, richiesta r "
                    "WHERE c.tipologia='AZIENDA' AND c.id_cliente=r.cliente "
                    "AND c.ragione_sociale LIKE '"
                +ui->comboBoxLettera->currentText().toStdString()+"%' ORDER BY RAGIONE_SOCIALE";
        query = db->executeQuery(QString::fromStdString(stringQuery));
        model = new QSqlQueryModel();
        model->setQuery(query);
        model->setHeaderData(0,Qt::Horizontal,"RAGIONE SOCIALE");
        model->setHeaderData(1,Qt::Horizontal,"VIA");
        model->setHeaderData(2,Qt::Horizontal,"NUMERO CIVICO");
        ui->tblElenco->setModel(model);
        ui->tblElenco->resizeColumnsToContents();
        db->closeConnection();
    }
}
