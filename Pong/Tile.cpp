#include "Tile.h"



bool Tile::getFill()
{
	return this->fill;
}
void Tile::setFill(bool newFill)
{
	fill = newFill;
	//if (player == 1) // two players
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
	//else
	//{
	//	if (newFill == true) // the fill is now Blue, or populated
	//	{
	//		this->setFillColor(sf::Color::Blue);
	//	}
	//	else if (newFill == false) // the fill should now be white, or unpopulated
	//	{
	//		this->setFillColor(sf::Color::White);
	//	}
	//}
	
}