/***

* Programmer: Charlotte Wertz, Janelle Kau, Analysse Palomares, Anika Khan

* Class: CptS 122

* Programming Assignment: Programming assignment 9

* Description: This program will allow 2 players to play conways game of life.
*
***/

#pragma once
#include<iostream>

#include <SFML/Graphics.hpp>



using sf::Mouse;
using std::string;

class Button : public sf::Drawable, sf::Transformable
{
public:
    Button(sf::Texture& actual_image, sf::Texture& clicked, string label);
    bool checkClick(sf::RenderWindow& window);
    void setPosition(sf::Vector2f location);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

private:
    sf::Texture actual_image;
    sf::Texture clicked;
    sf::Text text;
    sf::Sprite buttons;
    sf::Font font;
    bool current;
};