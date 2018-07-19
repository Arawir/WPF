#include "comline.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Comline::Comline(QWidget *parent){
  main_layout = new QVBoxLayout(this);
  scroll_area = new QScrollArea();
  scroll_layout = new QVBoxLayout();
  new_letter_edit = new QTextEdit();
  
  scroll_area->setLayout(scroll_layout);
  main_layout->addWidget(scroll_area);
  main_layout->addWidget(new_letter_edit);
  
  setLayout(main_layout);
}

void Comline::Add_letter( Letter *L){
  letters.append(L);
  scroll_layout->addWidget(L);
}

Letter* Comline::To_send(){
  Letter *to_send = new Letter();
  to_send->Set_text( new_letter_edit->toPlainText() );
  to_send->Set_from_id(my_id);
  to_send->Set_from_name(my_name);
  to_send->Set_to_id(from_id);
  to_send->Set_from_id(my_id);
  to_send->Set_round(round);

  return to_send;
}



////////////////////////////////////////////////////////////////////////////////
//SLOTS




