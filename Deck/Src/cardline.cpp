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

QStringList Cardline::To_send(){
  QStringList out;
  
  foreach(Card_type_panel *P, panels){
    if(P->Number()!=0 ){
      out.append( "USE_CARD_|_" + P->Card_id() + "_|_"
		  + QString::number(P->Number()) + "_|_"
		  + my_id + "_|_" + player_id );
    }
  }

  return out;
}
