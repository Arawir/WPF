#ifndef GOLD_HH
#define GOLD_HH

#include <QCoreApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QComboBox>
#include <QDebug>
////////////////////////////////////////////////////////////////////////////////

class Gold : public QWidget{
Q_OBJECT
private:
  qint32 gold=0;
  
  QVBoxLayout *main_layout;
  QLabel *label;

public:
  Gold(QWidget *parent = nullptr);
  void Set_gold(qint32 g); // use by mainapp
  void Add_gold(qint32 g); // use by gui
  qint32 Free_gold(){ return gold; }

signals:
  void Gold_changed_sig();
};




////////////////////////////////////////////////////////////////////////////////
#endif
