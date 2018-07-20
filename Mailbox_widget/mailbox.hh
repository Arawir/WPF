#ifndef MAILBOX_HH
#define MAILBOX_HH

#include <QTabWidget>

#include "comline.hh"

////////////////////////////////////////////////////////////////////////////////
class Mailbox : public QWidget{
  Q_OBJECT
private:
  QList<Comline*> comlines;
  QList<Letter*> to_send;
  QString round;
  
  QVBoxLayout *main_layout;
  QTabWidget *tab_widget;
  QLabel *label;

  QPushButton *debug_button;
public:
  Mailbox(QObject *parent = nullptr);
  void Add_comline(Comline *C);
  void Add_letter(Letter *L);
  void Collect_letters();
  Letter* To_send();
  bool No_letter();

  void Debug();

public slots:
  void Debug_slot();
};
////////////////////////////////////////////////////////////////////////////////
#endif