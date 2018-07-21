#include "Inc/mailbox.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Mailbox::Mailbox(QWidget *parent) : QWidget(parent){
  main_layout = new QVBoxLayout();
  tab_widget = new QTabWidget();
  label = new QLabel("MESSENGER");
  debug_button = new QPushButton("Debug mailbox");
  
  main_layout->addWidget(label);
  main_layout->addWidget(tab_widget);
  main_layout->addWidget(debug_button);
  
  connect(debug_button, SIGNAL(clicked()), this, SLOT(Debug_slot()));
  
  setLayout(main_layout);
}

void Mailbox::Add_comline(QString fi, QString fn, QString mi, QString mn){
  Comline *C = new Comline();
  C->Set_from_id(fi);
  C->Set_from_name(fn);
  C->Set_to_id(mi);
  C->Set_to_name(mn);
  C->Set_round(0);
  comlines.append(C);
  tab_widget->addTab(C, C->From_name() );
}

void Mailbox::Add_letter(QString fi, QString fn, QString ti, QString tn, QString text, QString round){
  Letter *L = new Letter();
  L->Set_text(text);
  L->Set_from_id(fi);
  L->Set_from_name(fn);
  L->Set_to_id(ti);
  L->Set_to_name(tn);
  L->Set_round(round);
  
  foreach(Comline *C, comlines){
    qDebug() << C->To_id() << "   " << fi;
    if( C->From_id() == fi ){
      C->Add_letter(L);
      break;
    }
  }
}

QStringList Mailbox::To_send(){
  QString tmp="";
  QStringList out;

  foreach(Comline *C, comlines){
    tmp = C->To_send();
    if(tmp!="") out.append(tmp);
  }

  return out;
}

void Mailbox::Debug(){
  QStringList tmp = To_send();
  
  qDebug() << "Debug mailbox";
  qDebug() << "   To send list:";

  foreach(QString S, tmp){
    qDebug() << "   " << S;
  }
}
////////////////////////////////////////////////////////////////////////////////
//SLOTS
void Mailbox::Debug_slot(){
  Debug();
}
