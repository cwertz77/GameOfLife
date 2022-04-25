#pragma once
#include<iostream>

#include <SFML/Graphics.hpp>

//typedef enum mouseState
//{
//    int normal = 0;
//    int hovered = 1;
//    int clicked = 2;
//
//}MouseState;

// buttons
//
using sf::Mouse;
class Button : public sf::Sprite
{
public:
    Button();
    Button::Button(sf::Texture *actual_image, sf::Texture *clicked, sf::Vector2f location);
    bool checkClick(sf::RenderWindow& window);
    void set_text(std::string words);
    void set_positionText(sf::Vector2f location);
    void set_SizeText(int size);
    //bool getVar();
    sf::Texture* get_Sprite();
    sf::Text* get_Text();
    bool loadTextures();
    void draw(sf::RenderWindow& window);
    void text(sf::RenderWindow& window);
private:
    sf::Texture* actual_image;
    sf::Texture* clicked;
    sf::Texture* n_texture;
    sf::RectangleShape sprite;
    sf::Text text;
    bool current;
};


