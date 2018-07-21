#include <QApplication>
#include <QCoreApplication>
#include "card.hh"
#include "panel.hh"
#include "cardline.hh"

qint32 Card_type::free_cards=10;

int main(int argc, char *argv[]){
  QApplication app(argc, argv);

 
  Card_type_panel C1;
  Card_type_panel C2;
  Card_type Ctype;
  Cardline Cline;
  
  C1.Set_card_type(&Ctype);
  C2.Set_card_type(&Ctype);

  Cline.Add_panel(&C1);
  Cline.Add_panel(&C2);
  Cline.show();
  return app.exec();
}
