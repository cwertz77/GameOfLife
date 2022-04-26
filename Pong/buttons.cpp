#include "buttons.h"
Button::Button()
{
}
Button::Button(sf::Texture* actual_image, sf::Texture* clicked, sf::Vector2f location)
{
    this->sprite = sf::RectangleShape(sf::Vector2f(300, 100));
    this->actual_image = actual_image;
    this->clicked = clicked;
    this->n_texture = this->actual_image;
    this->sprite.setTexture(actual_image);
    this->sprite.setPosition(location);
    //this->actual_image.setPosition(location);
    //this->clicked.setPosition(location);
    //*actual_image.SetPosition(*actual_image.getPosition());
    //*clicked.SetPosition(*clicked.getPosition());
}

bool Button::checkClick(sf::RenderWindow& window)
{
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        sf::Vector2i position = sf::Mouse::getPosition(window);
        if (position.x > sprite.getPosition().x && position.x < sprite.getPosition().x + sprite.getSize().x && position.y > sprite.getPosition().y && position.y < sprite.getPosition().y + sprite.getSize().y)
            //Emma said there are built in functions
        {
            sprite.setTexture(clicked);
            //n_texture = &clicked;
            return true;
        }
        else
        {
            n_texture = actual_image;
            return false;
        }
    }


}

void Button::set_text(std::string words)
{
    //this->set_text(words);
    this->text.setString(words);
    this->set_SizeText(6);

    //Sprite button1 std::cout << "start" < , endl;
}

void Button::set_positionText(sf::Vector2f location)
{
    float x = location.x + 3;
    float y = location.y + 3;
    sf::Vector2f vect;
    vect.x = x;
    vect.y = y;
    this->set_positionText(vect);
}

void Button::set_SizeText(int size)
{
   size = 6;
   this->set_SizeText(6);
}
//bool Button::getVar()
//{
//    return current;
//}

sf::Texture* Button::get_Sprite()
{
    return n_texture;
}

sf::Text* Button::get_Text()
{
   return &text;
}

void Button::draw(sf::RenderWindow& window)
{
    window.draw(sprite);
    window.draw(text);
}

//void Button::text(sf::RenderWindow& window)
//{
//    window.draw(text);
//}


//bool Button::getVar()
//{
//    return current;
//}
