#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <sobre.h>
#include <pergunta1.h>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:


    void on_iniciar_clicked();

    void on_sobre_clicked();

private:
    Ui::Widget *ui;
    Sobre sobre;
    Pergunta1 pergunta1;
};

#endif // WIDGET_H
