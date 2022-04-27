#include "player.h"

/*************************************************************
 * Function: Player()
 * Date Created: 4/16/22
 * Date Last Modified: 4/26/22
 * Description: constructor for the player class and inherits from the tile class
 * Input parameters:int newPlayer
 * Returns:
 * Preconditions:
 * Postconditions:
 *************************************************************/
Player::Player(int newPlayer) : Tile()
{
	player = newPlayer;
}

/*************************************************************
 * Function: setFill
 * Date Created: 4/16/22
 * Date Last Modified: 4/26/22
 * Description: fills the tiles with color based on the player number and if the tile is populated or underpopulated
 * Input parameters: bool newFill
 * Returns:
 * Preconditions:
 * Postconditions:
 *************************************************************/
void Player::setFill(bool newFill)
{
	fill = newFill;
	if (player == 1) // two players
	{
		if (newFill == true) // the fill is now yellow, or populated
		{
			this->setFillColor(sf::Color::Yellow);
		}
		else if (newFill == false) // the fill should now be white, or unpopulated
		{
			this->setFillColor(sf::Color::White);
		}
	}
	else
	{
		if (newFill == true) // the fill is now Blue, or populated
		{
			this->setFillColor(sf::Color::Blue);
		}
		else if (newFill == false) // the fill should now be white, or unpopulated
		{
			this->setFillColor(sf::Color::White);
		}
	}
}

/*************************************************************
 * Function: setplayer()
 * Date Created: 1/16/22
 * Date Last Modified: 4/26/22
 * Description: setter, sets the variable player to new player
 * Input parameters:int newPlayer
 * Returns:
 * Preconditions:
 * Postconditions:
 *************************************************************/
void Player::setPlayer(int newPlayer)
{
	this->player = newPlayer;
}

/*************************************************************
 * Function: getPlayer()
 * Date Created: 4/16/22
 * Date Last Modified: 4/26/22
 * Description: getter, gets the variable player
 * Input parameters:
 * Returns:
 * Preconditions:
 * Postconditions:
 *************************************************************/
int Player::getPlayer()
{
	return this->player;
}
