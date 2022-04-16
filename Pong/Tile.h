#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics.hpp>

// tile class
class Tile : public sf::RectangleShape
{
public:
	// getter and setter for fill - should be replaced with the color fillers for square
	bool getFill();
	void setFill(bool newFill);
private:
	bool fill;
};
