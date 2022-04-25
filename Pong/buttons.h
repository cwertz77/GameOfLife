#pragma once
#include<iostream>

#include <SFML/Graphics.hpp>


<<<<<<< HEAD
// buttons
//
using sf::Mouse;
class Button : public sf::Sprite
{
public:
    Button();
    Button::Button(sf::Texture *actual_image, sf::Texture *clicked, sf::Vector2f location);
    bool checkClick(sf::RenderWindow& window);
=======

class Button : public sf::Sprite
{
public:
    Button(sf::Sprite* Nactual_image, sf::Sprite* Clicked, sf::Vector2f location);
    void checkClick(sf::Vector2f &Mouse);
>>>>>>> e1d5ea8eaa04fd0589cd8e6b205424bb6c35fd24
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






////typedef enum mouseState
////{
////    int normal = 0;
////    int hovered = 1;
////    int clicked = 2;
////
////}MouseState;
//
//// buttons
//class Button : public sf::Drawable
//{
//public:
//    Button();
//    Button(std::string s, sf::Font& font, sf::Vector2f position, sf::Uint32 style);
//
//    void setTextColor(sf::Color newText)
//    {
//        textColor = newText;
//    };
//    void setfillColor(sf::Color newfillColor)
//    { 
//        fillColor = newfillColor;
//    };
//    void setBorderColor(sf::Color newBorderColor)
//    { 
//        boarderColor = newBorderColor;
//    };
//    void setBorderThickness(float t) 
//    {
//        borderThickness = t;
//    };
//    void setBorderRadius(float r)
//    {
//        borderRadius = r;
//    };
//    void setPosition(sf::Vector2f position)
//    { 
//        position = position;
//    };
//
//    void setSize(unsigned int size);
//
//    void setText(std::string s)
//    {
//        text.setString(s);
//    };
//
//    void setStyle(sf::Uint32 style);
//
//    void setFont(sf::Font& font);
//
//    sf::Vector2f getPosition() 
//    {
//        return position;
//    };
//    sf::Vector2f getDimensions()
//    { 
//        return sf::Vector2f(button.getGlobalBounds().width, button.getGlobalBounds().height);
//    };
//    sf::Uint32 getState()
//    {
//        return btnstate;
//
//    };
//
//    void update(sf::Event& e, sf::RenderWindow& window);
//
//private:
//
//    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
//
//private:
//
//    sf::Color fillColor;
//    sf::Color textColor;
//    sf::Color boarderColor;
//
//    float borderThickness;
//    float borderRadius;
//    sf::Vector2f size;
//    sf::Vector2f position;
//    sf::Uint32 style;
//    sf::Uint32 btnstate;
//
//    sf::ConvexShape button;
//    sf::Font font;
//    unsigned int fontSize;
//    sf::Text text;
//};
//
