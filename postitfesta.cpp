#include "postitfesta.h"

PostitFesta::PostitFesta(QWidget* parent) : Postit(parent)
{

}

void PostitFesta::paintEvent(QPaintEvent *event) {
    this->setText("Data:" + data + "\n" + "Estilo:" + estilo + "\n" + "Horario:" + horario + "\n" + "Descriçao:" + descricao);
    QPalette p;
    p.setColor(QPalette::Window, Qt::yellow);
    this->setAutoFillBackground(true);
    this->setPalette(p);
    QLabel::paintEvent(event);
}
PostitFesta::PostitFesta(QString data1, QString estilo1, QString descricao1, QString horario1, QWidget *parent) : Postit(parent){
   data = data1;
   estilo = estilo1;
   descricao = descricao1;
   horario = horario1;
}

