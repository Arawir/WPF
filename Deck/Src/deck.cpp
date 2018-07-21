#include "Inc/deck.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Deck::Deck(QWidget *parent) : QWidget(parent){
  main_layout = new QVBoxLayout();
  label = new QLabel("YOUR CARD'S DECK");
  cards_layout = new QVBoxLayout();
  tab_widget = new QTabWidget();
  debug_button = new QPushButton("Debug");
  
  main_layout->addWidget(label);
  main_layout->addLayout(cards_layout);
  main_layout->addWidget(tab_widget);
  main_layout->addWidget(debug_button);

  connect(debug_button, SIGNAL(clicked()), this, SLOT(Debug_slot()));
  
  setLayout(main_layout);
}

void Deck::Add_card_type(QString id, QString name, QString desc){
  Card_type *C = new Card_type();
  C->Set_id(id);
  C->Set_name(name);
  C->Set_description(desc);
  C->Set_free_cards(0);
  C->Refresh();
  cards.append(C);
  
  Card_type_preview *V = new Card_type_preview();
  V->Set_card_type(C);
  cards_layout->addWidget(V);
  V->Refresh();
  views.append(V);

  foreach(Cardline *L, lines){
    Card_type_panel *P = new Card_type_panel();
    P->Set_card_type(C);
    L->Add_panel(P);
  }
}

void Deck::Add_card_line(QString pn, QString pi, QString mn, QString mi){
  Cardline *L = new Cardline();
  L->Set_player_name(pn);
  L->Set_player_id(pi);
  L->Set_my_name(mn);
  L->Set_my_id(mi);
  lines.append(L);
  tab_widget->addTab(L, L->Player_name());

  foreach(Card_type *C, cards){
    Card_type_panel *P = new Card_type_panel();
    P->Set_card_type(C);
    L->Add_panel(P);
  }
}

void Deck::Set_card_number(QString card_id, qint32 n){
  foreach(Card_type *C, cards){
    if(C->Id() == card_id){
      C->Set_free_cards(n);
      break;
    }
  }
}

QStringList Deck::To_send(){
  QStringList out;
  
  foreach(Cardline *L, lines){
    out += L->To_send();
  }

  return out;
}

void Deck::Debug(){
  QStringList tmp = To_send();
  
  qDebug() << "DEBUG DECK: ";
  qDebug() << "   TO SEND: ";
  
  foreach(QString S, tmp){
    qDebug() << "   " << S;
  }
}

////////////////////////////////////////////////////////////////////////////////
//SLOTS
void Deck::Debug_slot(){ Debug(); }
