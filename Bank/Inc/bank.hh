#ifndef BANK_HH
#define BANK_HH

#include "goldline.hh"
#include "goldview.hh"
#include "secret_acc.hh"
////////////////////////////////////////////////////////////////////////////////
class Bank : public QWidget{
Q_OBJECT
private:
  Gold *gold;
  Goldview *view;
  QList<Goldline*> lines;

  QVBoxLayout *main_layout;
  //  QScrollArea *scroll;

public:
  Bank(QWidget *parent = nullptr);
  void Set_free_gold(QString g);
  void Add_line(QString ti, QString tn, QString mi, QString mn);

  QStringList To_send();
};
////////////////////////////////////////////////////////////////////////////////
#endif
