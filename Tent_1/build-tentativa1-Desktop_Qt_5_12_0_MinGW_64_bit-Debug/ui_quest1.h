/********************************************************************************
** Form generated from reading UI file 'quest1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEST1_H
#define UI_QUEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Quest1
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QPushButton *viunadaButton;
    QPushButton *cachorroButton;
    QPushButton *coracaoButton;
    QPushButton *religiaoButton;
    QLabel *label;
    QPushButton *dragaoButton;
    QPushButton *outracoisaButton;

    void setupUi(QWidget *Quest1)
    {
        if (Quest1->objectName().isEmpty())
            Quest1->setObjectName(QString::fromUtf8("Quest1"));
        Quest1->resize(400, 300);
        gridLayout = new QGridLayout(Quest1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Quest1);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 380, 280));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        viunadaButton = new QPushButton(scrollAreaWidgetContents_2);
        viunadaButton->setObjectName(QString::fromUtf8("viunadaButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(9);
        viunadaButton->setFont(font);

        gridLayout_2->addWidget(viunadaButton, 1, 0, 1, 1);

        cachorroButton = new QPushButton(scrollAreaWidgetContents_2);
        cachorroButton->setObjectName(QString::fromUtf8("cachorroButton"));
        cachorroButton->setFont(font);

        gridLayout_2->addWidget(cachorroButton, 1, 1, 1, 1);

        coracaoButton = new QPushButton(scrollAreaWidgetContents_2);
        coracaoButton->setObjectName(QString::fromUtf8("coracaoButton"));
        coracaoButton->setFont(font);

        gridLayout_2->addWidget(coracaoButton, 5, 0, 1, 1);

        religiaoButton = new QPushButton(scrollAreaWidgetContents_2);
        religiaoButton->setObjectName(QString::fromUtf8("religiaoButton"));
        religiaoButton->setFont(font);

        gridLayout_2->addWidget(religiaoButton, 5, 1, 1, 1);

        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(10);
        label->setFont(font1);
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        dragaoButton = new QPushButton(scrollAreaWidgetContents_2);
        dragaoButton->setObjectName(QString::fromUtf8("dragaoButton"));
        dragaoButton->setFont(font);

        gridLayout_2->addWidget(dragaoButton, 6, 0, 1, 1);

        outracoisaButton = new QPushButton(scrollAreaWidgetContents_2);
        outracoisaButton->setObjectName(QString::fromUtf8("outracoisaButton"));
        outracoisaButton->setFont(font);

        gridLayout_2->addWidget(outracoisaButton, 6, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(scrollArea, 0, 1, 1, 1);


        retranslateUi(Quest1);

        QMetaObject::connectSlotsByName(Quest1);
    } // setupUi

    void retranslateUi(QWidget *Quest1)
    {
        Quest1->setWindowTitle(QApplication::translate("Quest1", "Form", nullptr));
        viunadaButton->setText(QApplication::translate("Quest1", "N\303\243o vi nada", nullptr));
        cachorroButton->setText(QApplication::translate("Quest1", "Cachorro", nullptr));
        coracaoButton->setText(QApplication::translate("Quest1", "Cora\303\247\303\243o", nullptr));
        religiaoButton->setText(QApplication::translate("Quest1", "Jesus Cristo", nullptr));
        label->setText(QApplication::translate("Quest1", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">O que foi visto na tela anterior</span></p></body></html>", nullptr));
        dragaoButton->setText(QApplication::translate("Quest1", "Drag\303\243o soltando fogo numa casa", nullptr));
        outracoisaButton->setText(QApplication::translate("Quest1", "Outra coisa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quest1: public Ui_Quest1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEST1_H
