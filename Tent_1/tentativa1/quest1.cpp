#include "quest1.h"
#include "ui_quest1.h"

Quest1::Quest1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Quest1)
{
    ui->setupUi(this);
}

Quest1::~Quest1()
{
    delete ui;
}
