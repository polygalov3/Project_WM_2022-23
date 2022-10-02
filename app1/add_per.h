#pragma once

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include<QObject>
#include <QtWidgets>



class Ledit : public QWidget {

  public:
    Ledit(QWidget *parent = 0);

    QGridLayout *get_grid();
    void delet();

    QGridLayout *new1();
  //private:
    QGridLayout *grid = nullptr;
};
