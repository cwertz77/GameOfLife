
#include "Board.h"
#include "buttons.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using std::cout;
using std::endl;
using std::cin;

// state machine constants

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "Conways Game of Life!");
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

	int option =0;
	int numPlayer = 0;
	//bool ready = false;

	while (numPlayer == 0)
	{
		cout << "Welcome to Conways Game of Life" << endl;
		cout << "Menu: " << endl << "1. Rules" << endl << "2. Play" << endl;
		cout << "Enter a Menu option: ";
		cin >> option;
		if (option == 1)
		{
			//print game rules
			// when majority of tiles are one color the tile that comes alive becomes that color
		}
		else
		{

			cout << "Enter 1 or 2 players: ";
			cin >> numPlayer;
			if (numPlayer == 2)
			{
				cout << "Player 1 enters tiles first" << endl;
				cout << "Press N for next player for player 2 to enter tiles" << endl;
			}
			/*if (numPlayer != 0)
				ready = true;*/
		}
	}

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		int start = 0;
		int player = 1;
		
		while (!start) // basically loops until a key is pressed that starts game of life
		{
			if (player == 1 && numPlayer == 2)
			{
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
				{
					player = 2;
				}
				
			}

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) // if left button pressed, go into find click
			{
				initial_board->find_click(window, player);
			}
			
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			{
				start = 1;
			}

			

		}
		while (1)
		{
			initial_board->check_board(window);
			Sleep(500);

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
			{
				window.close();
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