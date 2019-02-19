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
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

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
        pushButton_4 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 5, 1, 1, 1);

        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(10);
        label->setFont(font);
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 5, 0, 1, 1);

        pushButton = new QPushButton(scrollAreaWidgetContents_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(scrollArea, 0, 1, 1, 1);


        retranslateUi(Quest1);

        QMetaObject::connectSlotsByName(Quest1);
    } // setupUi

    void retranslateUi(QWidget *Quest1)
    {
        Quest1->setWindowTitle(QApplication::translate("Quest1", "Form", nullptr));
        pushButton_4->setText(QApplication::translate("Quest1", "PushButton", nullptr));
        label->setText(QApplication::translate("Quest1", "<html><head/><body><p align=\"center\">O que foi visto na tela anterior</p></body></html>", nullptr));
        pushButton_3->setText(QApplication::translate("Quest1", "PushButton", nullptr));
        pushButton->setText(QApplication::translate("Quest1", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("Quest1", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quest1: public Ui_Quest1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEST1_H
