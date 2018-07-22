#include "Inc/bank.hh"

///////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Bank::Bank(QWidget *parent) : QWidget(parent){
  gold = new Gold();
  view = new Goldview();
  view->Set_gold(gold);
  
  main_layout = new QVBoxLayout();
  main_layout->addWidget(view);
  
  setLayout(main_layout);
}

void Bank::Set_free_gold(QString g){  // ad Zeroes signal!!!!!!!!!!!!!!!!!
  gold->Set_gold( g.toInt() );
}

void Bank::Add_line(QString ti, QString tn, QString mi, QString mn){
  Goldline *G = new Goldline();
  G->Set_to_id(ti);
  G->Set_to_name(tn);
  G->Set_my_id(mi);
  G->Set_my_name(mn);
  G->Set_gold(gold);
  // G->Refresh();

  lines.append(G);
  main_layout->addWidget(G);
}

QStringList Bank::To_send(){
  qDebug() <<"todo";
  
}
