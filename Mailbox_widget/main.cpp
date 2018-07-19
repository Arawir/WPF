#include <QApplication>
#include <QCoreApplication>
#include "letter.hh"
#include "comline.hh"
#include "mailbox.hh"

int main(int argc, char *argv[]){
  QApplication app(argc, argv);
  Letter *L1 = new Letter();
  Letter *L2 = new Letter();
  Letter *L3 = new Letter();
  Letter *L4 = new Letter();
  Letter *L5 = new Letter();
  Letter *L6 = new Letter();
  
  Comline *C1 = new Comline();
  Comline *C2 = new Comline();

  C1->Set_from_name("aaa");
  C2->Set_from_name("bbb");
  
  C1->Add_letter(L1);
  C1->Add_letter(L2);
  C2->Add_letter(L3);
  C2->Add_letter(L4);
  C1->Add_letter(L5);
  C1->Add_letter(L6);

  Mailbox M;

  M.Add_comline(C1);
  M.Add_comline(C2);
  
  M.show();
  return app.exec();
}
