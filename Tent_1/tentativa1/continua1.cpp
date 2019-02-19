#include "continua1.h"
#include "ui_continua1.h"

#include<QTimer>
#include<QDebug>

#include<QLabel>
#include<QPushButton>
#include<QPalette>


Continua1::Continua1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Continua1)
{
    ui->setupUi(this);
}

Continua1::~Continua1()
{
    delete ui;
}
