#include "Inc/preview.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Card_type_preview::Card_type_preview(QWidget *parent) : QWidget(parent){
  main_layout = new QVBoxLayout();
  label = new QLabel("empty");
  main_layout->addWidget(label);
  setLayout(main_layout);
}

void Card_type_preview::Set_card_type(Card_type *c){
  C = c;
  connect(C, SIGNAL(Number_changed_sig()), this, SLOT(Refresh_slot()));
  label->setText( C->Name() + ": " + QString::number(C->Free_cards()) );
}

void Card_type_preview::Refresh(){
  label->setText( C->Name() + ": " + QString::number(C->Free_cards()) );
}
////////////////////////////////////////////////////////////////////////////////
//SLOTS
void Card_type_preview::Refresh_slot(){
  Refresh();
}
