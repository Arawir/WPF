#ifndef PREVIEW_HH
#define PREWIEV_HH

#include "card.hh"

///////////////////////////////////////////////////////////////////////////////
class Card_type_preview : public QWidget{
Q_OBJECT
private:
  Card_type *C=nullptr;
  
  QVBoxLayout *main_layout;
  QLabel *label;

public:
  Card_type_preview(QWidget *parent = nullptr);

  void Set_card_type(Card_type *c);
  void Refresh();
  void Debug();		   
public slots:
  void Refresh_slot();
};

///////////////////////////////////////////////////////////////////////////////
#endif
