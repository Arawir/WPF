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
    static qint32 free_cards;
public:
  Card_type(QObject *parent = nullptr){ }

  void Set_id(QString i){ id=i; }
  void Set_name(QString n){ name=n; }
  void Set_description(QString d){ description=d; }
  static void Set_free_cards(qint32 n){ free_cards = n; }
  QString Id(){ return id; }
  QString Name(){ return name; }
  QString Description(){ return description; }
  qint32 Free_cards(){ return free_cards; }

  void Debug();
};




////////////////////////////////////////////////////////////////////////////////
#endif
