/********************************************************************************
** Form generated from reading UI file 'pergunta1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERGUNTA1_H
#define UI_PERGUNTA1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pergunta1
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QPushButton *ir;
    QLabel *titulo;
    QLabel *enunciado;

    void setupUi(QWidget *Pergunta1)
    {
        if (Pergunta1->objectName().isEmpty())
            Pergunta1->setObjectName(QString::fromUtf8("Pergunta1"));
        Pergunta1->resize(400, 300);
        Pergunta1->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Pergunta1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Pergunta1);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 380, 280));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ir = new QPushButton(scrollAreaWidgetContents);
        ir->setObjectName(QString::fromUtf8("ir"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(10);
        ir->setFont(font);

        gridLayout_2->addWidget(ir, 3, 2, 1, 1);

        titulo = new QLabel(scrollAreaWidgetContents);
        titulo->setObjectName(QString::fromUtf8("titulo"));
        titulo->setFont(font);

        gridLayout_2->addWidget(titulo, 1, 0, 1, 1);

        enunciado = new QLabel(scrollAreaWidgetContents);
        enunciado->setObjectName(QString::fromUtf8("enunciado"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(9);
        enunciado->setFont(font1);
        enunciado->setTextFormat(Qt::RichText);
        enunciado->setWordWrap(true);

        gridLayout_2->addWidget(enunciado, 2, 0, 1, 3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Pergunta1);

        QMetaObject::connectSlotsByName(Pergunta1);
    } // setupUi

    void retranslateUi(QWidget *Pergunta1)
    {
        Pergunta1->setWindowTitle(QApplication::translate("Pergunta1", "Form", nullptr));
        ir->setText(QApplication::translate("Pergunta1", "Ir", nullptr));
        titulo->setText(QApplication::translate("Pergunta1", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Pergunta 1</span></p></body></html>", nullptr));
        enunciado->setText(QApplication::translate("Pergunta1", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Aperte o bot\303\243o abaixo e olhe fixamente para a tela seguinte</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pergunta1: public Ui_Pergunta1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERGUNTA1_H
