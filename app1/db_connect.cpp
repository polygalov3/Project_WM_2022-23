#include "db_connect.h"

Db_connect::Db_connect()
{
    db = QSqlDatabase::addDatabase("QSQLITE"); //connect bd ---1 lvl
    WM = "/Users/ram3ik/Desktop/C++/projects/qt/Fuck/TB_WM.db"; // db derective
    db.setDatabaseName(WM); //connect bd


    db.exec("PRAGMA locking_mode = EXCLUSIVE"); //?????

    db.setUserName("ram3ik"); //connect bd (who want to connect)
    db.setHostName("ram3ik"); //connect bd
    db.setPassword("123607pr"); //connect bd


    if(!db.open())
        qDebug() << "Error:" << db.lastError().text();


//    QStringList lst = db.tables(); //show all table names in db
//    foreach (QString str, lst)
//        qDebug() << "Table:" << str;

    n = false;

    db.open();

    query = new QSqlQuery(db); // have to learn more !!!


}

void Db_connect::show_db()
{
    if(n == false)
    {
    model.setQuery("SELECT *" "FROM WM;");
    view.setModel(&model);
    view.show();
    n = true;
    }
    else
    {
        view.close();
        n = false;
    }

}

void Db_connect::add_1person(int tb_1int[2], QString tb_1str[2])
{
 query->prepare("INSERT INTO WM (name, surname, age, salary) VALUES(:name, :surname, :age, :salary)");   //add person
 query->bindValue(":name", tb_1str[0]);
 query->bindValue(":surname", tb_1str[1]);
 query->bindValue(":age", tb_1int[0]);
 query->bindValue(":salary", tb_1int[1]);

 qDebug()<<"YEAP";


 if(!query->exec())
     qDebug()<<query->lastError().text();
}

void Db_connect::clear()
{
    query->prepare("DELETE FROM WM WHERE id != 1");
    query->exec();
}
