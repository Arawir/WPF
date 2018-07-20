#include "card.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
void Card_type::Add(qint32 a){ number += a; }

qint32 Card_type::Subtract(qint32 s){
  if(s>number) return 0;
  number -= s;
  return s;
}

void Card_type::Debug(){
  qDebug() << "CARD TYPE DEBUG:";
  qDebug() << "   Id     : " << id;
  qDebug() << "   Name   : " << name;
  qDebug() << "   Desc   : " << description;
  qDebug() << "   Number : " << number;
}

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Card_type_panel::Card_type_panel(QObject *parent){
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

void Card_type_panel::Add(qint32 a){
 number += a;
 num_label->setText( QString::number(number) );
}

qint32 Card_type_panel::Subtract(qint32 s){
  if(s>number) return 0;
  number -= s;
  num_label->setText( QString::number(number) );
  return s;
}

////////////////////////////////////////////////////////////////////////////////
//SIGNALS
void Card_type_panel::Debug_slot(){ Debug(); }
void Card_type_panel::Add_slot(){ Add(1); }
void Card_type_panel::Sub_slot(){ Subtract(1); }
