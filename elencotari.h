#ifndef ELENCOTARI_H
#define ELENCOTARI_H

#include <QDialog>
#include "dbconnect.h"

using namespace std;

namespace Ui {
class ElencoTari;
}

class ElencoTari : public QDialog
{
    Q_OBJECT

public:
    explicit ElencoTari(QWidget *parent = 0);
    ~ElencoTari();

private slots:
    void on_btnElencoEsci_clicked();
    void on_rBtnElencoPrivato_clicked();
    void on_rBtnElencoAziende_clicked();

private:
    Ui::ElencoTari *ui;
    DbConnect *db;
    string stringQuery;
    QSqlQuery query;
    QSqlQueryModel *model;
};

#endif // ELENCOTARI_H
