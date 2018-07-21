#include "Inc/card.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS

void Card_type::Debug(){

  qDebug() << "CARD TYPE DEBUG:";
  qDebug() << "   Id     : " << id;
  qDebug() << "   Name   : " << name;
  qDebug() << "   Desc   : " << description;
  qDebug() << "   Free cards : " << free_cards;
}


