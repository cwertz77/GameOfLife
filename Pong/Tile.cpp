#include "Tile.h"



bool Tile::getFill()
{
	return fill;
}
void Tile::setFill(bool newFill)
{
	fill = newFill;
	if (newFill == true) // the fill is now yellow, or populated
	{
		this->setFillColor(sf::Color::Yellow);
	}
	else if (newFill == false) // the fill should now be white, or unpopulated
	{
		this->setFillColor(sf::Color::White);
	}
}