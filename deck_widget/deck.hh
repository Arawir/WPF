#ifndef DECK_HH
#define DECK_HH

#include "card.hh"

///////////////////////////////////////////////////////////////////////////////
class Deck : public QWidget{
Q_OBJECT
private:
  QList<Card_type> cards;
  
};

///////////////////////////////////////////////////////////////////////////////
#endif