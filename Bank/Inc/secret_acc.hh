#ifndef SECRET_ACC_HH
#define SECRET_ACC_HH

#include "goldline.hh"
///////////////////////////////////////////////////////////////////////////////
class Secret_acc : public Goldline{
private:
  qint32 secret_acc=0;

public:
  Secret_acc(QWidget *parent = nullptr) : Goldline(parent){ }

private:
  void Refresh();
};
///////////////////////////////////////////////////////////////////////////////
#endif
