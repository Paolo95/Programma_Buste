#pragma once

#ifndef CENTROFIERA_H
#define CENTROFIERA_H

#include <QMainWindow>
#include "mainMenu.h"

namespace Ui {
class CentroFiera;
}

class CentroFiera : public QMainWindow
{
    Q_OBJECT

public:
    explicit CentroFiera(QWidget *parent = nullptr);
    int numero_buste_cf(string);
    int numero_buste_biblioteca(string);
    int numero_bidoni_cf(string,string,string);
    int numero_bidoni_biblioteca(string,string,string);
    int numero_bidoni_cf(string,string);
    int numero_bidoni_biblioteca(string,string);
    int numero_calendari_cf(string);
    int numero_calendari_biblioteca(string);
    ~CentroFiera();

private slots:
    void on_btnEsci_clicked();

    void on_comboBoxCategoria_currentIndexChanged(const QString &arg1);

    void on_comboBoxTipologia_currentIndexChanged(const QString &arg1);

    void on_btnAggiungi_clicked();

    void on_btnElimina_clicked();

    void on_commandLinkBtnConferma_clicked();

    void on_btnPulisci_clicked();

    void on_btnVaiArrivi_clicked();

private:
    Ui::CentroFiera *ui;
    unsigned int n_buste;
    string quantitaIns;
    string codiceMaterialeIns;
    QDate dataArrivoDefault = QDate::currentDate();
    void popolaCategoria();
    void popolaDati();
    int currentRow=0;
    QAbstractItemModel* model;
    void popolaTipologia(string);
    void popolaDimensione(string,string);
    void impostaTabellaArrivo();
    QString dataUltimoArrivo();
    void closeEvent (QCloseEvent *);
    QMessageBox error;
    QMessageBox MessageExitCentroFiera;
    QAbstractButton *BtnSiCentroFiera;
    QAbstractButton *BtnNoCentroFiera;
    DbConnect *db;
    QSqlQuery query;
    string stringQuery;
};

#endif // CENTROFIERA_H
