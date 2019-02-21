#pragma once

#ifndef CONSEGNA_MATERIALE_H
#define CONSEGNA_MATERIALE_H

#include <QMainWindow>
#include <QCloseEvent>
#include "dbconnect.h"
#include <QMessageBox>
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
    explicit Consegna_Materiale(QWidget *parent = nullptr);
    Ui::Consegna_Materiale *ui;
    ~Consegna_Materiale();

public slots:
    void setValoriPrivato(QString,QString,QString,QString);
    void setValoriAzienda(QString,QString,QString);

private slots:
    void on_BtnMaterialeEsci_clicked();

    void on_BtnCerca_clicked();

    void on_rBtnPrivato_clicked();

    void on_rBtnAzienda_clicked();

    void on_BtnElenco_clicked();

    void on_cmdLinkBtnVerifica_clicked();

    void on_btnSalva_clicked();

    void on_tblRicerca_clicked(const QModelIndex &index);

private:

    void closeEvent (QCloseEvent *);
    string ragioneSociale;
    string cognome;
    string nome;
    string via;
    string civico;
    string tipologia;
    string stringQuery;
    string id_cliente;
    DbConnect *db;
    QSqlQuery query;
    QMessageBox error;
    QMessageBox MessageExitConsegnaMateriale;
    QAbstractButton *BtnSiConsegnaMateriale;
    QAbstractButton *BtnNoConsegnaMateriale;
    QSqlQueryModel *model;
    QModelIndex index;
};

#endif // CONSEGNA_MATERIALE_H
