#ifndef CARDLINE_HH
#define CARDLINE_HH

#include "panel.hh"

////////////////////////////////////////////////////////////////////////////////
class Cardline : public QWidget{
Q_OBJECT
private:
  QString player_name;
  QString player_id;
  QString my_name;
  QString my_id;

  QList<Card_type_panel*> panels;

  QVBoxLayout *main_layout;
public:
  Cardline(QWidget *parent = nullptr);

  void Set_player_name(QString n){ player_name = n; }
  void Set_my_name(QString n){ my_name = n; }
  void Set_player_id(QString i){ player_id = i; }
  void Set_my_id(QString i){ my_id = i; }

  QString Player_name(){ return player_name; }
  QString My_name(){ return my_name; }
  QString Player_id(){ return player_id; }
  QString My_id(){ return my_id; }
  
  void Add_panel(Card_type_panel *P);

  QStringList To_send();
};
////////////////////////////////////////////////////////////////////////////////
#endif
