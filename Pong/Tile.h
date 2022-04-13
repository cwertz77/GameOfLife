#pragma once

#include <SFML/Graphics.hpp>
#include "Square.h"

class Tile : public sf::RectangleShape
{
public:

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