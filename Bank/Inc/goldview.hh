#ifndef GOLDVIEW_HH
#define GOLDVIEW_HH

#include "gold.hh"

////////////////////////////////////////////////////////////////////////////////
class Goldview : public QWidget{
  Q_OBJECT
private:
  Gold *G;
  QVBoxLayout *main_layout;
  QLabel *label;

public:
  Goldview(QWidget *parent = nullptr);
  void Set_gold(Gold *g);
  void Refresh();
public slots:
  void Refresh_slot();
};
////////////////////////////////////////////////////////////////////////////////
#endif
