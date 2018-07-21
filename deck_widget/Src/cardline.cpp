#include "Inc/cardline.hh"

///////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Cardline::Cardline(QWidget *parent) : QWidget(parent){
  main_layout = new QVBoxLayout();
  setLayout(main_layout);
}

void Cardline::Add_panel(Card_type_panel *P){
  panels.append(P);
  main_layout->addWidget(P);
}
