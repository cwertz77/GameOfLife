
#include "Board.h"
#include <SFML/Graphics.hpp>

// state machine constants

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
	sf::CircleShape shape(100.f);
	//sf::CircleShape shape(100.f);
	Board initial_board();

	//shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
	}




	//	window.clear();
	//	window.draw(shape);
	//	window.display();
	//}



	return 0;
}