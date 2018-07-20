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
  qint32 number=0;

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

  virtual void Add(qint32 a);
  virtual qint32 Subtract(qint32 s);

  void Debug();
};

class Card_type_panel : public Card_type{
Q_OBJECT
private:
  QHBoxLayout *main_layout;
  QLabel *desc_label;
  QLabel *num_label;
  QPushButton *add_button;
  QPushButton *sub_button;

  QPushButton *debug_button;

public:
  Card_type_panel(QObject *parent = nullptr);

  void Add(qint32 a);
  qint32 Subtract(qint32 s);

private slots:
  void Debug_slot();
  void Add_slot();
  void Sub_slot();
};
////////////////////////////////////////////////////////////////////////////////
#endif
