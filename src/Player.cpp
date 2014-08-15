
/*LICENSE*/
#include "Player.h"

Player::Player(){
	this->uiController = 0;
}

Player::~Player(){

}

Player::Player(UIController* l_uiController){
	this->uiController = l_uiController;
}
