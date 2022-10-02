#ifndef ADD_PER_H
#define ADD_PER_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include<QObject>
#include <QtWidgets>

class Ledit : public QWidget {

  public:
    Ledit(QWidget *parent = 0);
    ~Ledit();

  //private:
    QGridLayout *grid = nullptr; // matrix layout

    QPushButton *ptr_add2 = nullptr;// open page 3 to add a person
    QPushButton *ptr_cancel2 = nullptr; // open p2

    QLabel *name = nullptr;
    QLabel *age = nullptr;
    QLabel *surname = nullptr;
    QLabel *salary = nullptr;

    QLineEdit *le1 = nullptr;
    QLineEdit *le2 = nullptr;
    QLineEdit *le3 = nullptr;
    QLineEdit *le4 = nullptr;

};

#endif
