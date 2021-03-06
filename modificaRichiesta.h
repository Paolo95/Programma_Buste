#pragma once

#ifndef MODIFICARICHIESTA_H
#define MODIFICARICHIESTA_H

#include <QDialog>
#include "gestioneRichieste.h"
#include "ui_gestioneRichieste.h"

namespace Ui {
class ModificaRichiesta;
}

class ModificaRichiesta : public QDialog
{
    Q_OBJECT

public:
    explicit ModificaRichiesta(class GestioneRichieste *,QWidget *parent = nullptr);
    ~ModificaRichiesta();

signals:
    void mandaModifica();
private slots:
    void on_BtnMaterialeEsci_clicked();

    void on_comboBoxRosse_currentIndexChanged(int index);

    void on_comboBoxBlu_currentIndexChanged(int index);

    void on_comboBoxVerdi_currentIndexChanged(int index);

    void on_comboBoxBianche_currentIndexChanged(int index);

    void on_comboBoxCalendari_currentIndexChanged(int index);

    void on_comboBoxMastelliUmido_currentIndexChanged(int index);

    void on_comboBoxMastelliVetro_currentIndexChanged(int index);

    void on_comboBoxSecchiUmido240_currentIndexChanged(int index);

    void on_comboBoxSecchiVetro240_currentIndexChanged(int index);

    void on_btnSalva_clicked();

    void on_dateEditRichiesta_userDateChanged(const QDate &date);

    void on_comboBoxSecchiUmido360_currentIndexChanged(int index);

    void on_comboBoxSecchiVetro360_currentIndexChanged(int index);

private:
    Ui::ModificaRichiesta *ui;
    GestioneRichieste *f;
    QMessageBox MessageExitGestioneRichieste;
    QAbstractButton *BtnSiGestioneRichieste;
    QAbstractButton *BtnNoGestioneRichieste;
    DbConnect *db;
    string stringQuery;
    QDate dataGestione;
    QString dataGestioneQ;
    unsigned int codiceCliente;
    QSqlQuery query;
    QMessageBox error;
    void activeButtonModifica();
};

#endif // MODIFICARICHIESTA_H
