#include "Inc/panel.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Card_type_panel::Card_type_panel(QWidget *parent) : QWidget(parent){
  main_layout = new QHBoxLayout();

  desc_label = new QLabel("Card name");
  num_label = new QLabel( QString::number(number) );
  add_button = new QPushButton("+");
  sub_button = new QPushButton("-");

  debug_button = new QPushButton("Debug");

  main_layout->addWidget(desc_label);
  main_layout->addWidget(add_button);
  main_layout->addWidget(num_label);
  main_layout->addWidget(sub_button);
  main_layout->addWidget(debug_button);

  connect(add_button, SIGNAL(clicked()), this, SLOT(Add_slot()));
  connect(sub_button, SIGNAL(clicked()), this, SLOT(Sub_slot()));
  connect(debug_button, SIGNAL(clicked()), this, SLOT(Debug_slot()));
  
  setLayout(main_layout);
}

void Card_type_panel::Set_card_type(Card_type *c){
  C = c;
  connect(C, SIGNAL(Zeroes_sig()), this, SLOT(Zeroes_slot()));
}

void Card_type_panel::Add(qint32 a){
  if(C==nullptr) return;
  if(a>C->free_cards) return;
  number += a;
  C->free_cards -= a;
  C->Refresh();
  num_label->setText( QString::number(number) );
}

qint32 Card_type_panel::Subtract(qint32 s){
  if(s>number) return 0;
  number -= s;
  C->free_cards += s;
  C->Refresh();
  num_label->setText( QString::number(number) );
  return s;
}

void Card_type_panel::Zeroes(){
  number = 0;
  num_label->setText( QString::number(number) );
}

void Card_type_panel::Debug(){
  qDebug() << "DEBUG PANEL: ";
  C->Debug();
}



////////////////////////////////////////////////////////////////////////////////
//SLOTS
void Card_type_panel::Debug_slot(){ Debug(); }
void Card_type_panel::Add_slot(){ Add(1); }
void Card_type_panel::Sub_slot(){ Subtract(1); }
void Card_type_panel::Zeroes_slot(){ Zeroes(); }
