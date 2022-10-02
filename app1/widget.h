#ifndef WIDGET_H
#define WIDGET_H

#include<QObject>
#include <QWidget>
#include <QtWidgets>
#include <QString>
#include <QInputDialog>


#include <db_connect.h>
#include <add_per.h>



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

    int a;
public slots:

    void page1(); // widget pages
    void page2();
    void page3(); // to add person


    void p1_visible(int n); // to hide page_number widget
    void p2_visible(int n); // to hide page_number widget
    void p3_visible(int n); // to hide page_number widget

    void show_db();



    void add_0person(); // to add a person // !!! make masives dynamic

private:
    Ui::Widget *ui;

    Db_connect x; // for func. show_db/add_person

    Ledit *l = nullptr; // for func. show_db/add_person

    int tb_int[2]; // // number of int columns in WM //  !!!!!!make it dynamic
    QString tb_str[2]; // number of str columns in WM //  !!!!!!make it dynamic


//p1------------------------------
    QLabel *label = nullptr;
    QVBoxLayout *pvbxLayout = nullptr;
    QPushButton *ptr_ok =  nullptr;
    QPushButton *ptr_cancel = nullptr;
//p2------------------------------
    QLabel *label2 = nullptr;
    QPushButton *ptr_find = nullptr;
    QPushButton *ptr_add = nullptr;
    QPushButton *ptr_other = nullptr;
    QPushButton *ptr_sdb = nullptr;
    QPushButton *ptr_back = nullptr;
//p3------------------------------
    QPushButton *ptr_add2 = nullptr;
    QPushButton *ptr_cancel2 = nullptr;
    QLabel *name = nullptr;
    QLabel *age = nullptr;
    QLabel *surname = nullptr;
    QLabel *salary = nullptr;
    QLineEdit *le1 = nullptr;
    QLineEdit *le2 = nullptr;
    QLineEdit *le3 = nullptr;
    QLineEdit *le4 = nullptr;

    QGridLayout *grid = nullptr;





};
#endif // WIDGET_H
