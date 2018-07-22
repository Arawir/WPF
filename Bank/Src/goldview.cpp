#include "Inc/goldview.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Goldview::Goldview(QWidget *parent) : QWidget(parent){
  main_layout = new QVBoxLayout();
  label = new QLabel("no connected to class gold");
  main_layout->addWidget(label);
  setLayout(main_layout);
}

void Goldview::Set_gold(Gold *g){
  G = g;
  Refresh();
}

void Goldview::Refresh(){
  label->setText("Your free gold: " + QString::number(G->Free_gold()) );
}

////////////////////////////////////////////////////////////////////////////////
//SLOTS
void Goldview::Refresh_slot(){
  Refresh();
}
