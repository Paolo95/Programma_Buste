#pragma once

#ifndef STATISTICHE_H
#define STATISTICHE_H

#include <QMainWindow>

#include "mainMenu.h"

namespace Ui {
class Statistiche;
}

class Statistiche : public QMainWindow
{
    Q_OBJECT

public:
    explicit Statistiche(QWidget *parent = nullptr);
    ~Statistiche();

private slots:
    void on_btnEsci_clicked();

    void on_btnCerca_clicked();

private:
    Ui::Statistiche *ui;
    void closeEvent (QCloseEvent *);
    QMessageBox error;
    QMessageBox MessageExitStatistiche;
    QAbstractButton *BtnSiStatistiche;
    QAbstractButton *BtnNoStatistiche;
    DbConnect *db;
    QSqlQuery query;
    string stringQuery;
    QSqlQueryModel *model;
    QModelIndex index;
};

#endif // STATISTICHE_H
