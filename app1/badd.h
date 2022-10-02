#pragma once

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include<QObject>
#include <QtWidgets>



class Badd
{
public:
    Badd();

    QGridLayout *get_grid();
    void delet();

    QGridLayout *new1();
  //private:
    QGridLayout *grid = nullptr;

};
