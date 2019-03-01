/********************************************************************************
** Form generated from reading UI file 'pergunta2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERGUNTA2_H
#define UI_PERGUNTA2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pergunta2
{
public:
    QLabel *label;
    QPushButton *salvarxmlButton;

    void setupUi(QWidget *Pergunta2)
    {
        if (Pergunta2->objectName().isEmpty())
            Pergunta2->setObjectName(QString::fromUtf8("Pergunta2"));
        Pergunta2->resize(422, 337);
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(9);
        Pergunta2->setFont(font);
        label = new QLabel(Pergunta2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 34, 381, 161));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(12);
        label->setFont(font1);
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);
        salvarxmlButton = new QPushButton(Pergunta2);
        salvarxmlButton->setObjectName(QString::fromUtf8("salvarxmlButton"));
        salvarxmlButton->setGeometry(QRect(110, 260, 191, 23));

        retranslateUi(Pergunta2);

        QMetaObject::connectSlotsByName(Pergunta2);
    } // setupUi

    void retranslateUi(QWidget *Pergunta2)
    {
        Pergunta2->setWindowTitle(QApplication::translate("Pergunta2", "Form", nullptr));
        label->setText(QApplication::translate("Pergunta2", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Vai ser a pergunta 2, mas por enquanto \303\251 a tela de encerramento para testar a cria\303\247\303\243o do arquivo XML</span></p></body></html>", nullptr));
        salvarxmlButton->setText(QApplication::translate("Pergunta2", "Salvar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pergunta2: public Ui_Pergunta2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERGUNTA2_H
