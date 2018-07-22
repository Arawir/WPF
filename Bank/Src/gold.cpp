#include "Inc/gold.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Gold::Gold(QWidget *parent) : QWidget(parent){
  main_layout = new QVBoxLayout();
  label = new QLabel("Your gold: " + QString::number(gold) );
  main_layout->addWidget(label);
  setLayout(main_layout);
}

void Gold::Set_gold(qint32 g){
  gold = g;
  label->setText("Your gold: " + QString::number(gold) );
  emit Gold_changed_sig();
}

void Gold::Add_gold(qint32 g){
  gold += g;
  label->setText("Your gold: " + QString::number(gold) );
}
