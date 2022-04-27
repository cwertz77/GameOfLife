/***

* Programmer: Charlotte Wertz, Janelle Kau, Analysse Palomares, Anika Khan

* Class: CptS 122

* Programming Assignment: Programming assignment 9

* Description: This program will allow 2 players to play conways game of life.
*
***/

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
		this->setPosition(pos);
		fill = false;
	}
	// getter and setter for fill - should be replaced with the color fillers for square
	bool getFill();
	void setFill(bool newFill);

protected:
	bool fill;
};
