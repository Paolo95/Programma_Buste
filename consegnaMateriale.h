#ifndef CONSEGNA_MATERIALE_H
#define CONSEGNA_MATERIALE_H

#include <QMainWindow>
#include <QCloseEvent>
#include "dbconnect.h"
#include <QStandardItemModel>
#include "elencotari.h"
#include "ui_consegnaMateriale.h"
#include "mainMenu.h"

using namespace std;

namespace Ui {
class Consegna_Materiale;
}

class Consegna_Materiale : public QMainWindow
{
    Q_OBJECT

public:
    explicit Consegna_Materiale(QWidget *parent = 0);
    ~Consegna_Materiale();

private slots:
    void on_BtnMaterialeEsci_clicked();

    void on_BtnCerca_clicked();

    void on_rBtnPrivato_clicked();

    void on_rBtnAzienda_clicked();

    void on_BtnElenco_clicked();

    void on_cmdLinkBtnVerifica_clicked();

private:
    Ui::Consegna_Materiale *ui;
    void closeEvent (QCloseEvent *event);
    string ragioneSociale;
    string cognome;
    string nome;
    string via;
    string civico;
    string tipologia;
    string stringQuery;
    int i;
    bool check;
    DbConnect *db;
    QSqlQuery query;
    QMessageBox error;
    QSqlQueryModel *model;
    QModelIndex index;
};

#endif // CONSEGNA_MATERIALE_H