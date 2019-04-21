#pragma once

#ifndef GESTIONEARRIVI_H
#define GESTIONEARRIVI_H

#include <QDialog>
#include "mainMenu.h"

namespace Ui {
class GestioneArrivi;
}

class GestioneArrivi : public QDialog
{
    Q_OBJECT

public:
    explicit GestioneArrivi(QWidget *parent = nullptr);
    ~GestioneArrivi();

private slots:
    void on_btnEsci_clicked();

    void on_btnCerca_clicked();

    void on_btnPulisci_clicked();

    void on_comboBoxTipologia_currentIndexChanged(const QString &arg1);

    void on_comboBoxCategoria_currentIndexChanged(const QString &arg1);

    void on_btnModifica_clicked();

    void on_btnSalva_clicked();


    void on_btnElimina_clicked();

private:
    Ui::GestioneArrivi *ui;
    void closeEvent (QCloseEvent *);
    QMessageBox MessageExitGestioneArrivi;
    QAbstractButton *BtnSiGestioneArrivi;
    QAbstractButton *BtnNoGestioneArrivi;
    QDate dataArrivoDefault = QDate::currentDate();
    DbConnect *db;
    void popolaCategoria();
    void popolaTipologia(string);
    void popolaDimensione(string,string);
    string stringQuery;
    QMessageBox error;
    QSqlQuery query;
    QSqlQueryModel *model;
    QModelIndex index;
    string codiceMateriale;
    string dataEliminazione;
    string quantitaEliminazione;
};

#endif // GESTIONEARRIVI_H
