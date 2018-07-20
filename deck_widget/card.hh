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
private:
  QString id;
  QString name;
  QString description;
  qint32 number;

public:
  Card_type(QObject *parent = nullptr){ }

  void Set_id(QString i){ id=i; }
  void Set_name(QString n){ name=n; }
  void Set_description(QString d){ description=d; }
  void Set_number(qint32 n){ number=n; }
  QString Id(){ return id; }
  QString Name(){ return name; }
  QString Description(){ return description; }
  qint32 Number(){ return number; }
};
////////////////////////////////////////////////////////////////////////////////
#endif
