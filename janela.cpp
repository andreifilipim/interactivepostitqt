#include "janela.h"
#include <QTextEdit>
#include <QLabel>
#include <QInputDialog>
#include <QPushButton>
#include <QApplication>
#include "PostitTrab.h"
#include "postitcompromisso.h"
#include "PostitBasico.h"
#include "postitfesta.h"


using namespace std;
Janela::Janela(QWidget *parent):QMainWindow{parent}
{
    this->setGeometry(100,100,1344,756);
    this->setWindowTitle("CRONOGRAMA");

    basico = new QPushButton("Basico",this);
    basico->setGeometry(1230,10,100,50);
    connect(basico, SIGNAL(clicked(bool)), this, SLOT(CriarPostitBasico()));


    trabalho = new QPushButton("Trabalho", this);
    trabalho->setGeometry(1230,70,100,50);
    connect(trabalho, SIGNAL(clicked(bool)), this, SLOT(CriarPostitTrab()));


    compromisso = new QPushButton("Compromisso",this);
    compromisso->setGeometry(1230,130,100,50);
    connect(compromisso, SIGNAL(clicked(bool)), this, SLOT(CriarPostitcompromisso()));

    festa = new QPushButton("Festa", this);
    festa->setGeometry(1230,190,100,50);
    connect(festa, SIGNAL(clicked(bool)), this, SLOT(CriarPostitFesta()));

}
void Janela::CriarPostitTrab(){
   QString data = QInputDialog::getText(this, "Data", "Digite sua data:");
   QString disciplina = QInputDialog::getText(this, "Disciplina", "Digite qual sua disciplina:");
   QString descricao = QInputDialog::getText(this, "Descricao", "Digite sua descrucai:");
   PostitTrab *t = new PostitTrab(data, disciplina, descricao, this);
   t->show();
}

void Janela::CriarPostitcompromisso(){
   QString data = QInputDialog::getText(this, "Data", "Digite sua data:");
   QString tipo = QInputDialog::getText(this, "Disciplina", "Digite qual o tipo do compromisso:");
   QString descricao = QInputDialog::getText(this, "Descricao", "Digite sua descricao:");
   QString horario = QInputDialog::getText(this, "Horario", "Digite a hora do seu compromisso:");
   PostitCompromisso *c = new PostitCompromisso(data, tipo, descricao, horario, this);
   c->show();
   v->push_back(c);
}

void Janela::CriarPostitBasico(){
   QString data = QInputDialog::getText(this, "Data", "Digite sua data:");
   QString descricao = QInputDialog::getText(this, "Descricao", "Digite sua descrucao:");
   PostitBasico *b = new PostitBasico(data, descricao, this);
   b->show();
}

void Janela::CriarPostitFesta(){
    QString data = QInputDialog::getText(this, "Data", "Digite sua data:");
    QString estilo = QInputDialog::getText(this, "estilo", "Digite qual sera o estilo de musica da festa:");
    QString descricao = QInputDialog::getText(this, "Descricao", "Digite sua descricao:");
    QString horario = QInputDialog::getText(this, "Horario", "Digite a hora da festa:");
    PostitFesta *f = new PostitFesta(data, estilo, descricao, horario, this);
    f->show();
}
