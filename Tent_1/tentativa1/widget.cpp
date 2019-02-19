#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QDebug>
#include <QPushButton>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton_3,&QPushButton::clicked,[=](){
    int ret = QMessageBox::warning(this,"Sair","Deseja sair do aplicativo?",
                                    QMessageBox::Yes | QMessageBox::No);

    if ( ret == QMessageBox::Yes)
    {
        qDebug() << "User clicked on Yes";
        qApp->exit();
    }

    if ( ret == QMessageBox::No)
    {
        qDebug() << "User clicked on No";
    }
   });
    connect(ui->iniciar,&QPushButton::clicked,[=](){

    });
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_iniciar_clicked()
{
    hide();
    pergunta1.show();
}

void Widget::on_sobre_clicked()
{
    sobre.show();
}
