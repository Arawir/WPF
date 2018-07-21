#include "Inc/mailbox.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Mailbox::Mailbox(QWidget *parent) : QWidget(parent){
  main_layout = new QVBoxLayout();
  tab_widget = new QTabWidget();
  label = new QLabel("MESSENGER");
  debug_button = new QPushButton("Debug");
  
  main_layout->addWidget(label);
  main_layout->addWidget(tab_widget);

  connect(debug_button, SIGNAL(clicked()), this, SLOT(Debug_slot()));
  
  setLayout(main_layout);
}

void Mailbox::Add_comline(Comline *C){
  comlines.append(C);
  tab_widget->addTab(C, C->From_name() );
}

void Mailbox::Add_letter(Letter *L){
  foreach(Comline *C, comlines){
    if( C->From_id() == L->To_id() ){
      C->Add_letter(L);
      break;
    }
  }
}

void Mailbox::Collect_letters(){
  Letter* tmp;
  foreach(Comline *C, comlines){
    tmp = C->To_send();
    if(tmp!=NULL) to_send.append(tmp); 
  }
}

Letter* Mailbox::To_send(){
  Letter *L = to_send.first();
  to_send.removeFirst();
  return L;
}

bool Mailbox::No_letter(){ return to_send.isEmpty(); }


void Mailbox::Debug(){
  qDebug() << "Debug mailbox";
}
////////////////////////////////////////////////////////////////////////////////
//SLOTS
void Mailbox::Debug_slot(){
  Debug();
}
