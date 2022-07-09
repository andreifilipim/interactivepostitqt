#include "postitcompromisso.h"

PostitCompromisso::PostitCompromisso(QWidget* parent) : Postit(parent)
{

}

void PostitCompromisso::paintEvent(QPaintEvent *event) {
    this->setText("Data:" + data + "\n" + "Tipo:" + tipo + "\n" + "Horario:" + horario + "\n" + "Descriçao:" + descricao);
    QPalette p;
    p.setColor(QPalette::Window, Qt::blue);
    this->setAutoFillBackground(true);
    this->setPalette(p);
    QLabel::paintEvent(event);
}
PostitCompromisso::PostitCompromisso(QString data1, QString tipo1, QString descricao1, QString horario1, QWidget *parent) : Postit(parent){
   data = data1;
   tipo = tipo1;
   descricao = descricao1;
   horario = horario1;
}
