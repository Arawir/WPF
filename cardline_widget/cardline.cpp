#include "cardline.hh"

///////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Cardline::Cardline(QObject *parent){
  main_layout = new QVBoxLayout();
  setLayout(main_layout);
}

void Cardline::Add_panel(Card_type_panel *P){
  panels.append(P);
  main_layout->addWidget(P);
}
