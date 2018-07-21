#include "Inc/comline.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Comline::Comline(QWidget *parent) : QWidget(parent){
  main_layout = new QVBoxLayout(this);
  scroll_widget = new QWidget();
  scroll_area = new QScrollArea();
  scroll_layout = new QVBoxLayout();
  new_letter_edit = new QTextEdit();
  debug_button = new QPushButton("DEBUG");


  main_layout->addWidget(scroll_area);
  main_layout->addWidget(new_letter_edit);
  main_layout->addWidget(debug_button);
  
  scroll_widget->setLayout(scroll_layout);
  // scroll_widget->setSizePolicy(QSizePolicy::Expanding);

  
  scroll_area->setWidget(scroll_widget);
  scroll_area->setWidgetResizable(true);
  scroll_area->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
  
  //
 
  connect(debug_button, SIGNAL(clicked()), this, SLOT(Debug_slot()));
  
  setLayout(main_layout);
}

void Comline::Add_letter( Letter *L){
  letters.append(L);
  scroll_layout->addWidget(L);
}

QString Comline::To_send(){
  if( new_letter_edit->toPlainText()=="" ) return "";

  QString out = "SEND_LETTER_|_" + my_id + "_|_" + from_id + "_|_"
    + round + "_|_" + new_letter_edit->toPlainText();
  
  return out;
}

void Comline::Debug(){
  Letter *to_send = new Letter();
  to_send->Set_text( new_letter_edit->toPlainText() );
  to_send->Set_from_id(my_id);
  to_send->Set_from_name(my_name);
  to_send->Set_to_id(from_id);
  to_send->Set_from_id(my_id);
  to_send->Set_round(round);
  
  qDebug() << "Debug next comline:";
  qDebug() << "   from id   : " << from_id;
  qDebug() << "   to id     : " << from_id;
  qDebug() << "   from name : " << from_id;
  qDebug() << "   to name   : " << from_id;
  qDebug() << "   round     : " << from_id;
  qDebug() << "Letter  to send ";
  to_send->Debug();
  qDebug() << "Other letters: ";

  foreach(Letter *L, letters){
    L->Debug();
  }

  delete to_send;
}

////////////////////////////////////////////////////////////////////////////////
//SLOTS

void Comline::Debug_slot(){
  Debug();
}


