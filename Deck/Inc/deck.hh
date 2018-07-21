#include "cardline.hh"
#include "preview.hh"

////////////////////////////////////////////////////////////////////////////////
class Deck : public QWidget{
Q_OBJECT
private:
  QList<Card_type*> cards;
  QList<Cardline*>  lines;
  QList<Card_type_preview*> views;
  
  QVBoxLayout *main_layout;
  QVBoxLayout *cards_layout;
  QLabel *label;
  QTabWidget *tab_widget;

  QPushButton *debug_button;
  
public:
  Deck(QWidget *parent = nullptr);

  void Add_card_type(QString id, QString name, QString desc);
  void Add_card_line(QString pn, QString pi, QString mn, QString mi);

  void Set_card_number(QString card_id, qint32 n);
  QStringList To_send();

  void Debug();

private slots:
  void Debug_slot();
};
