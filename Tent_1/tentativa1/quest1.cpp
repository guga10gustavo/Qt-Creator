#include "quest1.h"
#include "ui_quest1.h"
#include "QDebug"


Quest1::Quest1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Quest1)
{
    ui->setupUi(this);
    connect(ui->viunadaButton,&QPushButton::clicked,[=](){
        QString resposta = "Não viu nada";
        questoes.setq1(resposta);
        pergunta2.questoes.setq1(resposta);
        qDebug() << "A resposta foi : " << questoes.getq1();
        hide();
        pergunta2.show();

    });
    connect(ui->cachorroButton,&QPushButton::clicked,[=](){
        QString resposta = "Cachorro";
        questoes.setq1(resposta);
        pergunta2.questoes.setq1(resposta);
        qDebug() << "A resposta foi : " << questoes.getq1();
        hide();
        pergunta2.show();
    });
    connect(ui->coracaoButton,&QPushButton::clicked,[=](){
        QString resposta = "Coração";
        questoes.setq1(resposta);
        pergunta2.questoes.setq1(resposta);
        qDebug() << "A resposta foi : " << questoes.getq1();
        hide();
        pergunta2.show();
    });
    connect(ui->religiaoButton,&QPushButton::clicked,[=](){
        QString resposta = "Jesus Cristo";
        questoes.setq1(resposta);
        pergunta2.questoes.setq1(resposta);
        qDebug() << "A resposta foi : " << questoes.getq1();
        hide();
        pergunta2.show();
    });
    connect(ui->dragaoButton,&QPushButton::clicked,[=](){
        QString resposta = "Dragão soltando fogo em uma casa";
        questoes.setq1(resposta);
        pergunta2.questoes.setq1(resposta);
        qDebug() << "A resposta foi : " << questoes.getq1();
        hide();
        pergunta2.show();
    });
    connect(ui->outracoisaButton,&QPushButton::clicked,[=](){
        QString resposta = "Outra coisa";
        questoes.setq1(resposta);
        pergunta2.questoes.setq1(resposta);
        qDebug() << "A resposta foi : " << questoes.getq1();
        hide();
        pergunta2.show();
    });
}

Quest1::~Quest1()
{
    delete ui;
}
