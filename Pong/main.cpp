
#include "Board.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

// state machine constants

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");
////	sf::CircleShape shape(100.f);
//	//sf::CircleShape shape(100.f);
	Board* initial_board = new Board(window);
//		for (int i = 0; i < 50; i++)
//		{
//			for (int j = 0; j < 40; j++)
//			{
//				Tile tile(sf::Vector2f(20 * i, 20 * j), sf::Vector2f(20, 20), sf::Color::White);
//				window.draw(tile);
//				
//			}
//		}
//		window.display();
	//window.display();
	//shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}		
		while (1) // basically loops until a key is pressed that starts game of life
		{
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{						
				initial_board->find_click(window);

				//for (int i = 0; i < 50; i++)
				//{
				//	for (int j = 0; j < 40; j++)
				//	{
				//		//if (localPosition >= (i * 20, j * 20) && localPosition <= (i * 20 + 20))
				//		//{
				//		//	initial_board[i][j]->setFill(1);
				//		//}
				//	}
				//}
				// get position relative to window


				// fill tile?
				//pTile.setFill()
			}
		}
	}

	

	// fill tile?
		//pTile.setFill(localPosition)
	//}




	//	window.clear();
	//	window.draw(shape);
	//	window.display();
	//}


	return 0;

}