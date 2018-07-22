#include "Inc/goldline.hh"


////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Goldline::Goldline(QWidget *parent) : QWidget(parent){
  main_layout = new QVBoxLayout();
  top_layout = new QHBoxLayout();
  bottom_layout = new QHBoxLayout();

  label = new QLabel("todo");
  
  p1000_button = new QPushButton("+1000");
  p100_button = new QPushButton("+100");
  p10_button = new QPushButton("+10");
  p1_button = new QPushButton("+1");

  m1000_button = new QPushButton("-1000");
  m100_button = new QPushButton("-100");
  m10_button = new QPushButton("-10");
  m1_button = new QPushButton("-1");

  mapper = new QSignalMapper();

  

  connect(p1000_button, SIGNAL(clicked()), mapper, SLOT(map()));
  connect(p100_button, SIGNAL(clicked()), mapper, SLOT(map()));
  connect(p10_button, SIGNAL(clicked()), mapper, SLOT(map()));
  connect(p1_button, SIGNAL(clicked()), mapper, SLOT(map()));

  connect(m1000_button, SIGNAL(clicked()), mapper, SLOT(map()));
  connect(m100_button, SIGNAL(clicked()), mapper, SLOT(map()));
  connect(m10_button, SIGNAL(clicked()), mapper, SLOT(map()));
  connect(m1_button, SIGNAL(clicked()), mapper, SLOT(map()));
  
  mapper-> setMapping(p1000_button, 1000);
  mapper-> setMapping(p100_button, 100);
  mapper-> setMapping(p10_button, 10);
  mapper-> setMapping(p1_button, 1);

  mapper-> setMapping(m1000_button, -1000);
  mapper-> setMapping(m100_button, -100);
  mapper-> setMapping(m10_button, -10);
  mapper-> setMapping(m1_button, -1);
	      
  connect(mapper, SIGNAL(mapped(qint32)), this, SLOT(Set_gold_slot(qint32)));
  
  main_layout->addWidget(label);
  main_layout->addLayout(top_layout);
  main_layout->addLayout(bottom_layout);

  top_layout->addWidget(p1000_button);
  top_layout->addWidget(p100_button);
  top_layout->addWidget(p10_button);
  top_layout->addWidget(p1_button);

  bottom_layout->addWidget(m1000_button);
  bottom_layout->addWidget(m100_button);
  bottom_layout->addWidget(m10_button);
  bottom_layout->addWidget(m1_button);
	  
  setLayout(main_layout);
}

void Goldline::Set_gold(Gold *g){
  G=g;
  //  connect(G, SIGNAL(Gold_changed_sig()), this, SLOT(Set_gold_slot()));
}

void Goldline::Set_to_id(QString i){
  to_id = i; 
  Refresh();
}
void Goldline::Set_to_name(QString n){
  to_name = n;
  Refresh();
}

void Goldline::Set_my_id(QString i){
  my_id = i;
  Refresh();
}
void Goldline::Set_my_name(QString n){
  my_name = n;
  Refresh();
}

void Goldline::Add_gold(qint32 g){
  qint32 free_gold = G->Free_gold();
  
  if(g<=free_gold){
    G->Set_gold(free_gold-g);
    to_send += g;
  }

  Refresh(); 
}

void Goldline::Sub_gold(qint32 g){
  qint32 free_gold = G->Free_gold();
    
  if(g<=to_send){
    G->Set_gold(free_gold-g);
    to_send += g;
  }

  Refresh();
}

void Goldline::Refresh(){
  label->setText( "Send to " + to_name + "(" + to_id +
		  "): " + QString::number(to_send) ); 
}
////////////////////////////////////////////////////////////////////////////////
//SLOTS
void Goldline::Set_gold_slot(qint32 g){
  if(g>=0) Add_gold(g);
  else Sub_gold(g);
}
