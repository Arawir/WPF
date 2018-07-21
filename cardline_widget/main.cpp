#include <QApplication>
#include <QCoreApplication>
#include "card.hh"
#include "panel.hh"

qint32 Card_type::free_cards=10;

int main(int argc, char *argv[]){
  QApplication app(argc, argv);

 
  Card_type_panel C1;
  Card_type_panel C2;
  Card_type Ctype;
  C1.Set_card_type(&Ctype);
  C2.Set_card_type(&Ctype);
  
  C1.show();
  C2.show();
  return app.exec();
}
