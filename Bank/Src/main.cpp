#include <QApplication>
#include <QCoreApplication>

#include "Inc/goldline.hh"

int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  
  Gold *G = new Gold();
  G->Set_gold(10000);

  Goldline *L1 = new Goldline();
  Goldline *L2 = new Goldline();
  L1->Set_gold(G);
  L2->Set_gold(G);

  L1->show();
  L2->show();
  
  return app.exec();
}
