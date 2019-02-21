#pragma once

#ifndef ELENCOTARI_H
#define ELENCOTARI_H

#include <QDialog>
#include "dbconnect.h"
#include "consegnaMateriale.h"

using namespace std;

namespace Ui {
class ElencoTari;
}

class ElencoTari : public QDialog
{
    Q_OBJECT

public:
    explicit ElencoTari(class Consegna_Materiale *,QWidget *parent = nullptr);
    ~ElencoTari();

signals:
    void mandaValoriPrivato(QString,QString,QString,QString);
    void mandaValoriAzienda(QString,QString,QString);

private slots:
    void on_btnElencoEsci_clicked();

    void on_btnCerca_clicked();

    void on_btnElencoPassa_clicked();

private:
    Ui::ElencoTari *ui;
    DbConnect *db;
    string stringQuery;
    QSqlQuery query;
    QSqlQueryModel *model;
    QMessageBox error;
    QModelIndex index;
    QString ragioneSociale;
    QString cognome;
    QString nome;
    QString via;
    QString civico;
    Consegna_Materiale* n;
};

#endif // ELENCOTARI_H
