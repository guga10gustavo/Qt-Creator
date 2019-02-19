#include "pergunta1.h"
#include "ui_pergunta1.h"
#include<QTimer>
#include<QDebug>
#include<QPushButton>
#include<QPalette>

/*
#include<QLabel>
#include<QPushButton>

*/

Pergunta1::Pergunta1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pergunta1)
{
    ui->setupUi(this);

    connect(ui->ir,&QPushButton::clicked,[=](){

        this->hide();
        continua1.show();
        QPalette backcont1;
        backcont1.setColor(QPalette::Background,Qt::white);
        continua1.setAutoFillBackground(true);
        continua1.setPalette(backcont1);
        temporizador();
    });

/*
   QTimer *timer = new QTimer(this);
     connect(timer, SIGNAL(timeout()), this, SLOT(timer(timer)));
*/


/*
    QTimer::singleShot(2000, this, [=](){
        this->hide();
       qDebug()<<"Contou 2 segundos";
        continua1.show();
    });
*/


}

Pergunta1::~Pergunta1()
{
    delete ui;
}

void Pergunta1::temporizador()
{
    QTimer::singleShot(5000, this, [=](){
    qDebug()<<"Contou 5 segundos";
    continua1.hide();
    quest1.show();
});
}

/*
 void Pergunta1::timer( QTimer *timer)
{
    timer->start(2000);
    qDebug()<< "Contado";
    this->hide();
    continua1.show();
}
*/
