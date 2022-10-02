#ifndef WIDGET_H
#define WIDGET_H

#include<QObject>
#include <QWidget>
#include <QtWidgets>
#include <QString>
#include <QInputDialog>


#include <db_connect.h>
#include <add_per.h>
#include <page2.h> //p1



QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget :public QWidget // Main menu
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    Db_connect db_WM;


public slots:

    void page1(); // widget pages
    void page2();
    void page3(); // to add person


    void p0_2visible(); // to hide page_number widget   //// change int on bool
    void p1_3visible(); // to hide page_number widget  //// change int on bool
    void p2_4visible(); // to hide page_number widget  //// change int on bool

    void show_db();



    void add_0person(); // to add a person // !!! make masives dynamic

private:
    Ui::Widget *ui;

    Db_connect x; // for func. show_db/add_person

    Ledit *l = nullptr; // for func. show_db/add_person

    Page2 *p = nullptr; // for page 1 (change the class name)

    Page1 *p1 = nullptr;

    int tb_int[2]; // // number of int columns in WM //  !!!!!!make it dynamic
    QString tb_str[2]; // number of str columns in WM //  !!!!!!make it dynamic

};
#endif // WIDGET_H
