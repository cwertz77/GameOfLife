#include "buttons.h"

/**
* Function: Button()
* Description: constuctor for button
* Input parameters: sf::Texture& actual_image, sf::Texture& clicked, string label
* Returns:
* Preconditions: board needs to be built
* Postconditions:
*/
Button::Button(sf::Texture& actual_image, sf::Texture& clicked, string label)
{
    this->actual_image = actual_image;
    this->clicked = clicked;

    this->buttons.setTexture(actual_image);

    this->text.setString(label);
    this->text.setCharacterSize(80);
    this->text.setColor(sf::Color::Black);

    font.loadFromFile("Arial.ttf");
    this->text.setFont(font);
}

/*
* Function: checkClick()
* Description: checks if button is clicked
* Input parameters: sf::RenderWindow& window
* Returns: true or fals
* Preconditions: button contructor needs to be built
* Postconditions: checks the click
**/
bool Button::checkClick(sf::RenderWindow& window)
{
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        sf::Vector2i position = sf::Mouse::getPosition(window);
        if (position.x > buttons.getPosition().x && position.x < buttons.getPosition().x + actual_image.getSize() .x
            && position.y > buttons.getPosition().y && position.y < buttons.getPosition().y + actual_image.getSize().y)
        {
            buttons.setTexture(clicked);
            return true;
        }
        
    }

    buttons.setTexture(actual_image);
    return false;

}

/**
* Function: draw()
* Description: draws the text and sprites
* Input parameters: sf::RenderTarget& window, sf::RenderStates states
* Returns:
* Preconditions: the text and sprite needs to be set
* Postconditions: draws the text and sprite to the window
*/
void Button::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    states.transform *= getTransform();
    states.texture = &actual_image;

    window.draw(buttons, states);
    window.draw(text);

}

/**
* Function: setPosition()
* Description: sets postion of buttons
* Input parameters: sf::Vector2f location
* Returns:
* Preconditions: the text and sprite needs to be set
* Postconditions:
*/
void Button::setPosition(sf::Vector2f location)
{
   text.setOrigin(sf::Vector2f(text.getLocalBounds().width / 2, 0));
   text.setPosition(location + sf::Vector2f(150, 0));
   buttons.setPosition(location);
}