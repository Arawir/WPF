#ifndef PANEL_HH
#define PANEL_HH

#include "card.hh"

///////////////////////////////////////////////////////////////////////////////
class Card_type_panel : public QWidget{
Q_OBJECT
private:
  qint32 number=0;
  Card_type *C=nullptr;
  
  QHBoxLayout *main_layout;
  QLabel *desc_label;
  QLabel *num_label;
  QPushButton *add_button;
  QPushButton *sub_button;

  QPushButton *debug_button;

public:
  Card_type_panel(QObject *parent = nullptr);

  void Set_card_type(Card_type *c){ C = c; }
  void Add(qint32 a);
  qint32 Subtract(qint32 s);

  void Debug();
signals:
  // void Number_changed_sig();
			   
private slots:
  void Debug_slot();
  void Add_slot();
  void Sub_slot();
};

///////////////////////////////////////////////////////////////////////////////
#endif
