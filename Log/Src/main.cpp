#include <QApplication>
#include <QCoreApplication>
//#include "card.hh"
//#include "panel.hh"
//#include "preview.hh"
//#include "cardline.hh"
#include "Inc/deck.hh"

int main(int argc, char *argv[]){
  QApplication app(argc, argv);

  Deck *D = new Deck();

  D->Add_card_line("a","1","ja","0");
  D->Add_card_line("b","2","ja","0");

  D->Add_card_type("1","aaa","des1");
  D->Add_card_type("2","bbb","des2");

  D->Add_card_line("c","3","ja","0");
  D->Add_card_line("d","4","ja","0");

  D->Add_card_type("5","ggg","des5");
  D->Add_card_type("6","fff","des6");

  D->Set_card_number("5", 10);
  
  D->show();
  return app.exec();
}
