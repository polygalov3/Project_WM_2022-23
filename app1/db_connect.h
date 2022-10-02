#ifndef DB_CONNECT_H
#define DB_CONNECT_H


#include <QtSql>
#include <QTableView>
#include <QObject>
#include <QSqlQuery>



class Db_connect : public QObject // class to work with DB
{

    Q_OBJECT

public:
    Db_connect(); // lvl 1 to connect DB
    void clear(); // to clear tb


    QSqlQuery *query = new QSqlQuery; // lvl 2 ////???????
    QTableView view; //lvl 3
    QSqlQueryModel model; //lvl 3
    QSqlDatabase db; // DB
    QString WM; // path to the DB

    bool n; // to turn on/off show_db




public slots:
    void show_db(); //Show DB (note: to make an option to chose TB in DB)
    void add_1person(int tb_1int[2], QString tb_1str[2]); // add a person to tb

};

#endif // DB_CONNECT_H
