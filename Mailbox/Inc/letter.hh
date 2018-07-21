#ifndef LETTER_HH
#define LETTER_HH

#include <QCoreApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QComboBox>
#include <QDebug>
////////////////////////////////////////////////////////////////////////////////

class Letter : public QWidget{
  Q_OBJECT
public:
  explicit Letter(QWidget *parent = 0);
  void Set_text(QString t);
  void Set_from_id(QString i);
  void Set_from_name(QString n);
  void Set_to_id(QString i);
  void Set_to_name(QString n);
  void Set_round(QString r);

  QString To_name(){ return to_name; }
  QString To_id(){ return to_id; }
  
  void Debug();
private:
  QString text="";
  QString from_id="";
  QString from_name="";
  QString to_id="";
  QString to_name="";
  QString round="-1";

  QVBoxLayout *main_layout;
  QLabel *label;
};
////////////////////////////////////////////////////////////////////////////////
#endif
