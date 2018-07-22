#ifndef BANK_HH
#define BANK_HH

#include "goldline.hh"
#include "secret_acc.hh"
////////////////////////////////////////////////////////////////////////////////
class Bank : public QWidget{
Q_OBJECT
private:
  Gold *gold;
  QList<Goldline*> lines;

  QVBoxLayout *main_layout;

public:
  Bank(QWidget *parent = nullptr);
  void Set_free_gold(QString g);
  void Add_line(QString ti, QString tn, QString mi, QString mn);

  QStringList To_send();
};
////////////////////////////////////////////////////////////////////////////////
#endif
