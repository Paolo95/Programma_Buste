#ifndef GESTIONERICHIESTE_H
#define GESTIONERICHIESTE_H

#include <QMainWindow>
#include "mainMenu.h"
#include "modificaRichiesta.h"

namespace Ui {
class GestioneRichieste;
}

class GestioneRichieste : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestioneRichieste(QWidget *parent = 0);
    Ui::GestioneRichieste *ui;
    string dataRichiesta;
    unsigned int nRosse;
    unsigned int nBlu;
    unsigned int nVerdi;
    unsigned int nBianche;
    unsigned int nCalendari;
    unsigned int nMastelliUmido;
    unsigned int nMastelliVetro;
    unsigned int nSecchi240;
    unsigned int nSecchi1100;
    string ragioneSociale;
    string cognome;
    string nome;
    string via;
    string civico;
    string tipologia;
    ~GestioneRichieste();

public slots:
    void refreshRichieste();

private slots:
    void on_btnRichiesteEsci_clicked();

    void on_BtnCerca_clicked();

    void on_rBtnPrivato_clicked();

    void on_rBtnAzienda_clicked();

    void on_cmdLinkBtnTrova_clicked();

    void on_cmdLinkBtnModifica_clicked();

    void on_cmdLinkBtnElimina_clicked();

private:
    void closeEvent (QCloseEvent *);    
    string stringQuery;
    DbConnect *db;
    QSqlQuery query;
    QMessageBox error;
    QSqlQueryModel *model;
    QMessageBox MessageExitGestioneRichieste;
    QAbstractButton *BtnSiGestioneRichieste;
    QAbstractButton *BtnNoGestioneRichieste;
    unsigned int codiceCliente;
    QModelIndex index;
};

#endif // GESTIONERICHIESTE_H
