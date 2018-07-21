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

class Card_type : public QWidget{
Q_OBJECT
protected:
  QString id="";
  QString name="";
  QString description="";

public:
  qint32 free_cards=10;
public:
  Card_type(QWidget *parent = nullptr) : QWidget(parent){ }

  void Set_id(QString i){ id=i; }
  void Set_name(QString n){ name=n; }
  void Set_description(QString d){ description=d; }
  void Set_free_cards(qint32 n){free_cards = n;
    emit Zeroes_sig(); emit Number_changed_sig(); }
  QString Id(){ return id; }
  QString Name(){ return name; }
  QString Description(){ return description; }
  qint32 Free_cards(){ return free_cards; }

  void Refresh(){ emit Number_changed_sig(); }
  
  void Debug();

signals:
  void Number_changed_sig();
  void Zeroes_sig(); //zeros every card panel
};




////////////////////////////////////////////////////////////////////////////////
#endif
