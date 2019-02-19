#include "sobre.h"
#include "ui_sobre.h"
#include "widget.h"

Sobre::Sobre(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sobre)
{
    ui->setupUi(this);
}

Sobre::~Sobre()
{
    delete ui;
}

void Sobre::on_voltar_clicked()
{
    hide();

}
