#include <QApplication>
#include <QCoreApplication>
#include "letter.hh"
#include "comline.hh"


int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  Letter *L1 = new Letter();
  Letter *L2 = new Letter();
  Letter *L3 = new Letter();
  Letter *L4 = new Letter();
  // Letter *L5 = new Letter();
  Letter *L6 = new Letter();
  Comline C;
  C.Add_letter(L1);
  C.Add_letter(L2);
  C.Add_letter(L3);
  C.Add_letter(L4);
  // C.Add_letter(L5);
  // C.Add_letter(L6);
  C.show();
  return app.exec();
}
