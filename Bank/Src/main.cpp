#include <QApplication>
#include <QCoreApplication>

#include "Inc/goldline.hh"
#include "Inc/secret_acc.hh"
#include "Inc/bank.hh"

int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  Bank *B = new Bank();
  
  B->show();
  B->Set_free_gold("10000");
  B->Add_line("1", "aaa","0","I");
  
  return app.exec();
}
