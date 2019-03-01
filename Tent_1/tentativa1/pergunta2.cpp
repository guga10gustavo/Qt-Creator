#include "pergunta2.h"
#include "ui_pergunta2.h"
#include <QDebug>
#include <QDomDocument>
#include <QDomElement>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>

Pergunta2::Pergunta2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pergunta2)
{
    ui->setupUi(this);
    connect(ui->salvarxmlButton,&QPushButton::clicked,[=](){
        qDebug()<< "A resposta da questão 1 é : "<< questoes.getq1();

    auto filename = QFileDialog::getSaveFileName(this,"Salvar como",
                                                 QDir::rootPath(),"XML file (*.xml)");
    if(filename.isEmpty()){
        return;
    }
    QDomDocument doc;
    auto root = doc.createElement("Relatório");
    doc.appendChild(root);
    auto eRespostas = doc.createElement("Respostas");
    auto er1=doc.createElement("Questao 1");
    er1.appendChild(doc.createTextNode(questoes.getq1()));
    eRespostas.appendChild(er1);
    root.appendChild(eRespostas);

    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QMessageBox::critical(this,"Error",file.errorString());
        return;
    }
    QTextStream xout(&file);
    xout << doc.toString();
    file.flush();
    file.close();
   });

}

Pergunta2::~Pergunta2()
{
    delete ui;
}
