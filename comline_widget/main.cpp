#include <QApplication>
#include <QCoreApplication>
#include "letter.hh"
#include "comline.hh"


int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  Letter *L1 = new Letter();
  Comline C;
  C.Add_letter(L1);

  C.show();
  return app.exec();
}
