#ifndef GOLDLINE_HH
#define GOLDLINE_HH

#include <QSignalMapper>
#include "gold.hh"

////////////////////////////////////////////////////////////////////////////////

class Goldline : public QWidget{
Q_OBJECT
protected:
  qint32 to_send=0;
  Gold *G=nullptr;
  QString to_id;
  QString to_name;
  QString my_id;
  QString my_name;
  
  QVBoxLayout *main_layout;
  QHBoxLayout *top_layout;
  QHBoxLayout *bottom_layout;

  QLabel *label;
  QPushButton *p1000_button;
  QPushButton *p100_button;
  QPushButton *p10_button;
  QPushButton *p1_button;

  QPushButton *m1000_button;
  QPushButton *m100_button;
  QPushButton *m10_button;
  QPushButton *m1_button;

  QSignalMapper *mapper;

public:
  Goldline(QWidget *parent = nullptr);
  QString To_send();
  void Set_gold(Gold *g);
  void Set_to_id(QString i);
  void Set_to_name(QString n);
  void Set_my_id(QString i);
  void Set_my_name(QString n);
protected:
  void Add_gold(qint32 g);
  void Sub_gold(qint32 g);
  virtual void Refresh();
private slots:
  void Set_gold_slot(qint32 g);
  void Free_gold_changed_slot();
};




////////////////////////////////////////////////////////////////////////////////
#endif
