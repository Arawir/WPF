#ifndef MAILBOX_HH
#define MAILBOX_HH

#include <QTabWidget>

#include "comline.hh"

////////////////////////////////////////////////////////////////////////////////
class Mailbox : public QWidget{
  Q_OBJECT
private:
  QList<Comline*> comlines;
  QString round;
  
  QVBoxLayout *main_layout;
  QTabWidget *tab_widget;
  QLabel *label;

  QPushButton *debug_button;
public:
  Mailbox(QWidget *parent = nullptr);
  void Add_comline(QString fi, QString fn, QString mi, QString mn);
  void Add_letter(QString fi, QString fn, QString ti, QString tn, QString text, QString round);
  QStringList To_send();

  void Debug();

public slots:
  void Debug_slot();
};
////////////////////////////////////////////////////////////////////////////////
#endif
