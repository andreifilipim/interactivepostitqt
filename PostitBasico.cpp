#include "PostitBasico.h"

PostitBasico::PostitBasico(QWidget* parent) : Postit(parent)
{

}

void PostitBasico::paintEvent(QPaintEvent *event) {

    this->setText("Data:" + data + "\n" + "Descriçao:" + descricao);
    QPalette p;
    p.setColor(QPalette::Window, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(p);
    QLabel::paintEvent(event);
    /*this->setGeometry()*/
}
PostitBasico::PostitBasico(QString data1, QString descricao1, QWidget *parent) : Postit(parent){
   data = data1;
   descricao = descricao1;
}
