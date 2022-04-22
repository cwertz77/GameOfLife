#pragma once

#include <SFML/Graphics.hpp>

// tile class
class Tile : public sf::RectangleShape
{
public:
	Tile() : sf::RectangleShape(sf::Vector2f(10, 10))
	{
		fill = false;
	}
	// this is going to have the default vector/color in it.
	Tile(const sf::Vector2f& pos, const sf::Vector2f& size, const sf::Color& color) : sf::RectangleShape(size)
	{
		// starts color at false - changes color in setFill function
		//this->setFill(false);
		// creates a border for each color
		this->setOutlineThickness(2);
		this->setOutlineColor(sf::Color::Black);
	//	this->setOutlineColor(sf::Color(250, 150, 100));
		this->setPosition(pos);
		fill = false;
	}
	// getter and setter for fill - should be replaced with the color fillers for square
	bool getFill();
	void setFill(bool newFill);

protected:
	bool fill;
};
