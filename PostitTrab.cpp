#include "PostitTrab.h"

PostitTrab::PostitTrab(QWidget* parent) : Postit(parent)
{

}

void PostitTrab::paintEvent(QPaintEvent *event) {
    this->setText("Data:" + data + "\n" + "Disciplina:" + disciplina + "\n" + "Descriçao:" + descricao);
    QPalette p;
    p.setColor(QPalette::Window, Qt::red);
    this->setAutoFillBackground(true);
    this->setPalette(p);
    QLabel::paintEvent(event);
}
PostitTrab::PostitTrab(QString data1, QString disciplina1, QString descricao1, QWidget *parent) : Postit(parent){
   data = data1;
   disciplina = disciplina1;
   descricao = descricao1;
}
