#include <QApplication>
#include <QCoreApplication>
#include "card.hh"


int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  Card_type_panel C;
  C.show();
  return app.exec();
}
