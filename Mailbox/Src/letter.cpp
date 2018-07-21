#include "Inc/letter.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
Letter::Letter(QWidget *parent) : QWidget(parent){
  main_layout = new QVBoxLayout(this);
  label = new QLabel("nothing to show");
  main_layout->addWidget(label);
  setLayout(main_layout);
}
void Letter::Set_text(QString t){
  text = t;
  QString tmp = "FROM: " + from_name + " (" + from_id + ")  "
    + "TO: " + to_name + " (" + to_id + ")  "
    + "ROUND: " + round + "\r\n\r\n" + text;

  label->setText(tmp);
}
void Letter::Set_from_id(QString i){
  from_id = i;
  QString tmp = "FROM: " + from_name + " (" + from_id + ")  "
    + "TO: " + to_name + " (" + to_id + ")  "
    + "ROUND: " + round + "\r\n\r\n" + text;

  label->setText(tmp);
}
  
void Letter::Set_from_name(QString n){
  from_name = n;
  QString tmp = "FROM: " + from_name + " (" + from_id + ")  "
    + "TO: " + to_name + " (" + to_id + ")  "
    + "ROUND: " + round + "\r\n\r\n" + text;

  label->setText(tmp);
}

void Letter::Set_to_id(QString i){
  to_id = i;
  QString tmp = "FROM: " + from_name + " (" + from_id + ")  "
    + "TO: " + to_name + " (" + to_id + ")  "
    + "ROUND: " + round + "\r\n\r\n" + text;

  label->setText(tmp);
}

void Letter::Set_to_name(QString n){
  to_name = n;
  QString tmp = "FROM: " + from_name + " (" + from_id + ")  "
    + "TO: " + to_name + " (" + to_id + ")  "
    + "ROUND: " + round + "\r\n\r\n" + text;

  label->setText(tmp);
}

void Letter::Set_round(QString r){
  round = r;
  QString tmp = "FROM: " + from_name + " (" + from_id + ")  "
    + "TO: " + to_name + " (" + to_id + ")  "
    + "ROUND: " + round + "\r\n\r\n" + text;

  label->setText(tmp);
}

void Letter::Debug(){
  QString tmp = "FROM: " + from_name + " (" + from_id + ")  "
    + "TO: " + to_name + " (" + to_id + ")  "
    + "ROUND: " + round + "\r\n\r\n" + text;
  qDebug() << "////////////////////////////////";
  qDebug() << "Next letter debug: ";
  qDebug() << tmp;
  qDebug() << "////////////////////////////////";
}

////////////////////////////////////////////////////////////////////////////////
//SLOTS




