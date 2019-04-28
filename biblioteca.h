#pragma once

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <QMainWindow>
#include "mainMenu.h"

namespace Ui {
class Biblioteca;
}

class Biblioteca : public QMainWindow
{
    Q_OBJECT

public:
    explicit Biblioteca(QWidget *parent = nullptr);
    ~Biblioteca();

private slots:
    void on_btnEsci_clicked();
    void on_comboBoxCategoria_currentIndexChanged(const QString &arg1);
    void on_comboBoxTipologia_currentIndexChanged(const QString &arg1);
    void on_btnAggiungi_clicked();
    void on_btnPulisci_clicked();
    void on_btnElimina_clicked();

    void on_btnVaiArrivi_clicked();

    void on_commandLinkBtnConferma_clicked();

private:

    void popolaCategoria();
    void impostaTabellaArrivo();
    void popolaDati();
    void popolaDimensione(string,string);
    void popolaTipologia(string);
    int numero_buste_biblioteca(string);
    int numero_richieste(string);
    int numero_calendari_biblioteca(string);
    int numero_bidoni_biblioteca(string, string);
    QString dataUltimoArrivo();
    QAbstractItemModel* model;
    Ui::Biblioteca *ui;
    QMessageBox error;
    QMessageBox MessageExitBiblioteca;
    QAbstractButton *BtnSiBiblioteca;
    QAbstractButton *BtnNoBiblioteca;
    DbConnect *db;
    QSqlQuery query;
    string stringQuery;
    QDate dataArrivoDefault = QDate::currentDate();
    int currentRow=0;
    string quantitaIns;
    string codiceMaterialeIns;
};

#endif // BIBLIOTECA_H
