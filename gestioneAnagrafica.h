#pragma once

#ifndef GESTIONEANAGRAFICA_H
#define GESTIONEANAGRAFICA_H

#include <QMainWindow>
#include "mainMenu.h"

namespace Ui {
class GestioneAnagrafica;
}

class GestioneAnagrafica : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestioneAnagrafica(QWidget *parent = nullptr);
    QMessageBox MessageExitGestioneMateriale;
    QAbstractButton *BtnSiGestioneMateriale;
    QAbstractButton *BtnNoGestioneMateriale;
    string ragioneSociale;
    string cognome;
    string nome;
    string via;
    string civico;
    string tipologia;
    ~GestioneAnagrafica();

private slots:

    void on_rBtnPrivato_clicked();
    void on_rBtnAzienda_clicked();


    void on_BtnInserisci_clicked();

    void on_BtnCerca_clicked();

    void on_cmdLinkBtnElimina_clicked();

    void on_cmdLinkBtnModifica_clicked();

    void on_btnAnagraficaEsci_clicked();

    void on_txtRagioneSocialeMod_textChanged(const QString &arg1);

    void on_txtCognomeMod_textChanged(const QString &arg1);

    void on_txtViaMod_textChanged(const QString &arg1);

    void on_txtNomeMod_textChanged(const QString &arg1);

    void on_txtCivicoMod_textChanged(const QString &arg1);

    void on_BtnModifica_clicked();

private:
    Ui::GestioneAnagrafica *ui;
    QSqlQuery query;
    QMessageBox error;
    DbConnect *db;
    QMessageBox MessageExitGestioneAnagrafica;
    QAbstractButton *BtnSiGestioneAnagrafica;
    QAbstractButton *BtnNoGestioneAnagrafica;
    void closeEvent (QCloseEvent *);
    void activeButtonInserisci();
    void activeButtonModifica();
    bool isNumeric (string);
    QSqlQueryModel *model;
    unsigned int codiceCliente;
    QModelIndex index;
    string stringQuery;
};

#endif // GESTIONEANAGRAFICA_H
