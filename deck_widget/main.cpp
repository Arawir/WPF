#include <QApplication>
#include <QCoreApplication>
#include "card.hh"
#include "panel.hh"
#include "preview.hh"
#include "cardline.hh"


int main(int argc, char *argv[]){
  QApplication app(argc, argv);

 
  Card_type_panel C1;
  Card_type_panel C2;
  Card_type Ctype;
  Card_type_preview Pview;
  Cardline Cline;
  
  C1.Set_card_type(&Ctype);
  C2.Set_card_type(&Ctype);

  Cline.Add_panel(&C1);
  Cline.Add_panel(&C2);

  Pview.Set_card_type(&Ctype);
  
  Cline.show();
  Pview.show();
  return app.exec();
}
