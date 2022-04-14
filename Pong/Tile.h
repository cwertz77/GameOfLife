#pragma once

#include <SFML/Graphics.hpp>
#include "Square.h"
#include <SFML/Graphics.hpp>

class Tile : public sf::RectangleShape
{
public:
	// getter and setter for fill - should be replaced with the color fillers for square
	bool getFill();
	void setFill(bool newFill);
private:
	bool fill;
};

bool Tile::getFill()
{
	return fill;
}
void Tile::setFill(bool newFill)
{
	fill = newFill;
}