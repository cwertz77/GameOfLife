#include "Tile.h"


/*************************************************************
 * Function: getFill()
 * Date Created: 4/16/22
 * Date Last Modified: 4/26/22
 * Description: getter, gets the variable fill
 * Input parameters:
 * Returns:
 * Preconditions:
 * Postconditions:
 *************************************************************/
bool Tile::getFill()
{
	return this->fill;
}

/*************************************************************
 * Function: setFill()
 * Date Created: 4/16/22
 * Date Last Modified: 4/26/22
 * Description: setter, sets the variable fill to newFill and fills the tiles with color based on if the tile is populated or underpopulated
 * Input parameters:bool newFill
 * Returns:
 * Preconditions:
 * Postconditions:
 *************************************************************/
void Tile::setFill(bool newFill)
{
	fill = newFill;
	{
		if (newFill == true) // the fill is now yellow, or populated
		{
			this->setFillColor(sf::Color::Yellow);
		}
		else if (newFill == false) // the fill should now be white, or unpopulated
		{
			this->setFillColor(sf::Color::White);
		}

		//player == 2;
	}
	
}