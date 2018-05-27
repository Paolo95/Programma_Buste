#ifndef GESTIONERICHIESTE_H
#define GESTIONERICHIESTE_H

#include <QMainWindow>
#include "mainMenu.h"

namespace Ui {
class GestioneRichieste;
}

class GestioneRichieste : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestioneRichieste(QWidget *parent = 0);
    ~GestioneRichieste();

private slots:
    void on_btnRichiesteEsci_clicked();

    void on_BtnCerca_clicked();

    void on_rBtnPrivato_clicked();

    void on_rBtnAzienda_clicked();


private:
    Ui::GestioneRichieste *ui;
    void closeEvent (QCloseEvent *);
    string ragioneSociale;
    string cognome;
    string nome;
    string via;
    string civico;
    string tipologia;
    string stringQuery;
    DbConnect *db;
    QSqlQuery query;
    QMessageBox error;
    QSqlQueryModel *model;
    QMessageBox MessageExitGestioneRichieste;
    QAbstractButton *BtnSiGestioneRichieste;
    QAbstractButton *BtnNoGestioneRichieste;
};

#endif // GESTIONERICHIESTE_H
