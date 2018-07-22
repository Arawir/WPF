#include "Inc/secret_acc.hh"

////////////////////////////////////////////////////////////////////////////////
//FUNCTIONS
void Secret_acc::Refresh(){
  label->setText( "Secret account: " + QString::number(secret_acc)
		  + " + " + QString::number(to_send) ); 
}
