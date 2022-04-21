#include "buttons.h"
Button::Button(sf::Sprite* actual_image, sf::Sprite* clicked, sf::Vector2f location)
{
    this->actual_image = *actual_image; 
    this->clicked = *clicked;
    this->n_texture = &this->actual_image;
    this->actual_image.setPosition(location);
    this->clicked.setPosition(location);
    //*actual_image.SetPosition(*actual_image.getPosition());
    //*clicked.SetPosition(*clicked.getPosition());
}
void Button::checkClick(sf::Vector2f Mouse)
{
    bool click = true;
    if (click)
    {
        //Emma said there are built in functions
        if (mouse.x > n_texture && mouse.x < n_texure && localPosition.y >n_texture && localPosition.y <= j * 20 + 20)
        {
            n_texture = &click;
        }
    }
    else
    {
        return;
    }
    n_texture = &actual_image;

}

void Button::set_text(std::string words)
{
   this->set_text(words);
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

sf::Sprite* Button::get_Sprite()
{
    return n_texture;
}

sf::String* Button::get_Text()
{
   return &text;
}

void Button::set_text(std::string words)
{
   this->set_text(words);
}



