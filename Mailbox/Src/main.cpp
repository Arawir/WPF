#include <QApplication>
#include <QCoreApplication>
#include "Inc/letter.hh"
#include "Inc/comline.hh"
#include "Inc/mailbox.hh"

int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  Mailbox *M = new Mailbox();

  M->Add_comline("1", "aaa", "0", "ja");
  M->Add_comline("2", "bbb", "0", "ja");
  M->Add_comline("3", "ccc", "0", "ja");

  M->Add_letter("2","bbb","0","ja","test text","11");
  M->Add_letter("1","bbb","0","ja","test text aa","11");
  M->Add_letter("2","bbb","0","ja","test text bbb","11");
  
  M->show();
  return app.exec();
}
