#ifndef COMLINE_HH
#define COMLINE_HH

#include <QScrollArea>
#include <QSizePolicy>

#include "letter.hh"
////////////////////////////////////////////////////////////////////////////////

class Comline : public QWidget{
  Q_OBJECT
public:
  explicit Comline(QWidget *parent = 0);
  void Add_letter( Letter *L);
  void Set_from_id(QString i){ from_id = i; }
  void Set_from_name(QString n){ from_name = n; }
  void Set_to_id(QString i){ my_id = i; }
  void Set_to_name(QString n){ my_name = n; }
  void Set_round(QString r){ round = r; }
  QString From_id(){ return from_id; }
  QString From_name(){ return from_name; }
  QString To_id(){ return my_id; }
  QString To_name(){ return my_name; }
  
  QString To_send();

  void Debug();
	      
public slots:
  void Debug_slot();

private:
  QList<Letter*> letters;
  QString from_id="";
  QString from_name="";
  QString my_id="";
  QString my_name="";
  QString round;
  
  QVBoxLayout *main_layout;
  QWidget *scroll_widget;
  QVBoxLayout *scroll_layout;
  QScrollArea *scroll_area;
  QTextEdit *new_letter_edit;
  QPushButton *debug_button;
};
////////////////////////////////////////////////////////////////////////////////
#endif
