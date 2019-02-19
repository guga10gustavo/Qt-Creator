/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QLabel *imagem;
    QPushButton *iniciar;
    QPushButton *sobre;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(396, 423);
        Widget->setLayoutDirection(Qt::LeftToRight);
        Widget->setAutoFillBackground(true);
        Widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 376, 403));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        imagem = new QLabel(scrollAreaWidgetContents);
        imagem->setObjectName(QString::fromUtf8("imagem"));
        imagem->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/artificial_intelligence-256x256.jpg);"));

        gridLayout_3->addWidget(imagem, 0, 0, 1, 1);

        iniciar = new QPushButton(scrollAreaWidgetContents);
        iniciar->setObjectName(QString::fromUtf8("iniciar"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(14);
        iniciar->setFont(font);

        gridLayout_3->addWidget(iniciar, 1, 0, 1, 1);

        sobre = new QPushButton(scrollAreaWidgetContents);
        sobre->setObjectName(QString::fromUtf8("sobre"));
        sobre->setFont(font);

        gridLayout_3->addWidget(sobre, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);

        gridLayout_3->addWidget(pushButton_3, 3, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        imagem->setText(QString());
        iniciar->setText(QApplication::translate("Widget", "Iniciar", nullptr));
        sobre->setText(QApplication::translate("Widget", "Sobre", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
