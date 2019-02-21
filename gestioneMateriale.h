#pragma once

#ifndef GESTIONEMATERIALE_H
#define GESTIONEMATERIALE_H

#include <QDialog>
#include "mainMenu.h"

namespace Ui {
class gestioneMateriale;
}

class GestioneMateriale : public QDialog
{
    Q_OBJECT

public:
    explicit GestioneMateriale(QWidget *parent = nullptr);
    ~GestioneMateriale();

private slots:
    void on_btnEsci_clicked();

    void on_comboBoxCercaCategoria_currentIndexChanged(const QString &arg1);

    void on_btnCerca_clicked();

    void on_btnPulisci_clicked();

    void on_comboBoxCategoria_currentIndexChanged(const QString &arg1);

    void on_btnSalva_clicked();

    void on_btnElimina_clicked();

private:
    Ui::gestioneMateriale *ui;
    void closeEvent (QCloseEvent *);
    QMessageBox MessageExitGestioneMateriale;
    QAbstractButton *BtnSiGestioneMateriale;
    QAbstractButton *BtnNoGestioneMateriale;
    void popolaCategoria ();
    void popolaTipologia(string);
    QMessageBox error;
    DbConnect *db;
    string stringQuery;
    QModelIndex index;
    string categoriaElim;
    string tipologiaElim;
    string dimensioneElim;
    QSqlQuery query;
    QSqlQueryModel *model;
};

#endif // GESTIONEMATERIALE_H
