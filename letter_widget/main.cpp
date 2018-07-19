#include <QApplication>
#include <QCoreApplication>
#include "letter.hh"


int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  Letter L;
  L.show();
  return app.exec();
}
