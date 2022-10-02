#include "mainwindow.h"

#include <QApplication>
#include <QtSql>
#include <QTableView>

static bool createConnection() //READY
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE"); //connect bd ---1 lvl
    QString WM = "/Users/ram3ik/Desktop/C++/projects/qt/Fuck/TB_WM.db"; // db derective
    db.setDatabaseName(WM); //connect bd

    db.setUserName("ram3ik"); //connect bd
    db.setHostName("ram3ik"); //connect bd
    db.setPassword("123607pr"); //connect bd
    if(!db.open()){
        qDebug() << "DICK:" << db.lastError().text();
        return false;
    }

    QStringList lst = db.tables(); //show all table names in db
    foreach (QString str, lst){
        qDebug() << "Table:" << str;
    }
//---2 lvl ------READY


    return true;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    createConnection(); // 1lvl to connect bd

    QSqlQuery mm; // 2lvl to work with data

    mm.prepare("DELETE FROM WM WHERE name = ?"); //to delete rows
    mm.addBindValue("Rico"); //
    mm.exec();//

//    mm.prepare("INSERT INTO WM(name,salary)" "VALUES(:name,:salary);"); // to insert new data
//    mm.bindValue(":name","Rico");
//    mm.bindValue(":salary",1945);
//    qDebug()<<mm.exec(); // save changes/refresh



    QTableView view; // 3lvl to show gui
    QSqlQueryModel model;
    model.setQuery("SELECT *" "FROM WM;");

    if(model.lastError().isValid()){
        qDebug() << model.lastError();
    }


    view.setModel(&model);
    view.show();


    //MainWindow w;
    //w.show();
    return a.exec();
}
