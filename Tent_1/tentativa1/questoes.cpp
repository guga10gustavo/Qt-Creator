#include "questoes.h"

Questoes::Questoes()
{

}

void Questoes::setq1(const QString &r1)
{
    q1=r1;
}

void Questoes::setq2(const QString &r2)
{
    q2=r2;
}

void Questoes::steq3(const QString &r3)
{
    q3=r3;
}

QString Questoes::getq1() const
{
    return q1;
}

QString Questoes::getq2() const
{
    return q2;
}

QString Questoes::getq3() const
{
    return q3;
}
