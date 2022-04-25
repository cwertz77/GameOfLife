#pragma once

#include <SFML/Graphics.hpp>



class Button : public sf::Sprite
{
public:
    Button(sf::Sprite* Nactual_image, sf::Sprite* Clicked, sf::Vector2f location);
    void checkClick(sf::Vector2f &Mouse);
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
