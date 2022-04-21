#pragma once

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

class Button : public sf::Sprite
{
public:
    Button(sf::Sprite* actual_image, sf::Sprite* clicked, sf::Vector2f location);
    void checkClick(sf::Vector2f Mouse);
    void set_text(std::string words);
    void set_positionText(sf::Vector2f location);
    void set_SizeText(int size);
    //bool getVar();
    sf::Sprite* get_Sprite();
    sf::String* get_Text();
private:
    sf::Sprite actual_image;
    sf::Sprite clicked;
    sf::Sprite* n_texture;
    sf::String text;
    bool current;
};


