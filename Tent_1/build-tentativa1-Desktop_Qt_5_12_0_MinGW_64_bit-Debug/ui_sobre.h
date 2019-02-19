/********************************************************************************
** Form generated from reading UI file 'sobre.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOBRE_H
#define UI_SOBRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sobre
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *titulo;
    QLabel *conteudo;
    QPushButton *voltar;

    void setupUi(QWidget *Sobre)
    {
        if (Sobre->objectName().isEmpty())
            Sobre->setObjectName(QString::fromUtf8("Sobre"));
        Sobre->resize(455, 465);
        gridLayout = new QGridLayout(Sobre);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Sobre);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 435, 445));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        titulo = new QLabel(scrollAreaWidgetContents);
        titulo->setObjectName(QString::fromUtf8("titulo"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        titulo->setFont(font);
        titulo->setTextFormat(Qt::RichText);
        titulo->setWordWrap(true);

        gridLayout_2->addWidget(titulo, 0, 0, 1, 1);

        conteudo = new QLabel(scrollAreaWidgetContents);
        conteudo->setObjectName(QString::fromUtf8("conteudo"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(10);
        conteudo->setFont(font1);
        conteudo->setTextFormat(Qt::RichText);
        conteudo->setWordWrap(true);

        gridLayout_2->addWidget(conteudo, 1, 0, 1, 1);

        voltar = new QPushButton(scrollAreaWidgetContents);
        voltar->setObjectName(QString::fromUtf8("voltar"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        voltar->setFont(font2);

        gridLayout_2->addWidget(voltar, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);


        retranslateUi(Sobre);

        QMetaObject::connectSlotsByName(Sobre);
    } // setupUi

    void retranslateUi(QWidget *Sobre)
    {
        Sobre->setWindowTitle(QApplication::translate("Sobre", "Form", nullptr));
        titulo->setText(QApplication::translate("Sobre", "<html><head/><body><p align=\"center\">INTELIG\303\212NCIA ARTIFICIAL APLICADA EM TRIAGEM PSICOPATOL\303\223GICA</p></body></html>", nullptr));
        conteudo->setText(QApplication::translate("Sobre", "<html><head/><body><p align=\"justify\">A psicopatologia \303\251 o estudo sistem\303\241tico do comportamento, da cogni\303\247\303\243o e da experi\303\252ncia anormais; o estudo dos produtos de uma mente com um transtorno mental. Isto inclui as psicopatologias explicativas, nas quais existem supostas explica\303\247\303\265es, de acordo com conceitos te\303\263ricos (por exemplo, a partir de uma base psicodin\303\242mica, comportamental ou existencial, e assim por diante), e a psicopatologia descritiva, que consiste da descri\303\247\303\243o e da categoriza\303\247\303\243o precisas de experi\303\252ncias anormais, como informadas pelo paciente e observadas em seu comportamento.</p><p align=\"justify\">Um dos m\303\251todos mais frequentes de classifica\303\247\303\243o de doen\303\247a mental \303\251 pela categoriza\303\247\303\243o de experi\303\252ncias descritas por pessoas mentalmente doentes e da defini\303\247\303\243o dos termos utilizados, tais como &quot;depress\303\243o&quot; ou &quot;ansiedade"
                        "&quot;, que acometem grande parte da sociedade atual. Para o progresso no progn\303\263stico e no tratamento, tal classifica\303\247\303\243o \303\251 essencial. Dessa forma, tem-se a aplica\303\247\303\243o da ferramenta de IA, juntamente com a manipula\303\247\303\243o do m\303\251dico, itera\303\247\303\243o com o paciente e tecnologia, objetivando a realiza\303\247\303\243o da identifica\303\247\303\243o e da triagem psicopatol\303\263gica. </p></body></html>", nullptr));
        voltar->setText(QApplication::translate("Sobre", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sobre: public Ui_Sobre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOBRE_H
