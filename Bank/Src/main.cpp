#include <QApplication>
#include <QCoreApplication>

#include "Inc/goldline.hh"
#include "Inc/secret_acc.hh"

int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  
  Gold *G = new Gold();
  G->Set_gold(10000);

  Goldline *L1 = new Goldline();
  Goldline *L2 = new Goldline();
  Secret_acc *S = new Secret_acc();
  L1->Set_gold(G);
  L2->Set_gold(G);
  S->Set_gold(G);
  
  //L1->show();
  // L2->show();
  S->show();
  return app.exec();
}
