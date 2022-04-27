/***

* Programmer: Charlotte Wertz, Janelle Kau, Analysse Palomares, Anika Khan

* Class: CptS 122

* Programming Assignment: Programming assignment 9

* Description: This program will allow 2 players to play conways game of life.
*
***/

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "Board.h"
#include "buttons.h"

using std::cout;
using std::endl;
using std::cin;

// state machine constants
// SFML-2.5.1-windows-vc14-32-bit\SFML-2.5.1\include;%(AdditionalIncludeDirectories)
int main()
{
	sf::Sound sound;
	sf::SoundBuffer buffer;
	if (!buffer.loadFromFile("click.wav"))
	{
		return -1;
	}

	sf::Texture texture;
	sf::Texture texture1;
	if (!texture.loadFromFile("B1.png"))
	{
		return -1;
	}
	if (!texture1.loadFromFile("B2.png"))
	{
		return -1;
	}


   Button Start = Button(texture, texture1, "Start");
   Button Pause = Button(texture, texture1, "Pause");
   Button Stop = Button(texture, texture1, "Stop");

   Start.setPosition(sf::Vector2f(25, 850));
   Pause.setPosition(sf::Vector2f(350, 850));
   Stop.setPosition(sf::Vector2f(675, 850));

	int option =0;
	int numPlayer = 0;

	while (numPlayer == 0)
	{
		cout << "----------------------WELCOME TO CONWAYS GAME OF LIFE------------------------" << endl;
		cout << "Menu: " << endl << "1. Rules/How to Play" << endl << "2. Play" << endl;
		cout << "Enter a Menu option: ";
		cin >> option;
		if (option == 1)
		{
			cout<< endl << "-------------------HOW TO PLAY------------------" << endl;
			cout << "----------1 Player: -------------" << endl;
			cout << "1. Enter configureation of tiles" << endl << "2. Press play and enjoy !" << endl;
			cout << "----------2 Players: -------------" << endl;
			cout << "1. Player 1 enter configureation of tiles" << endl << "2. Press 'N' key for next player" << endl << "3. Player 2 enter configuration of tiles" << endl  
				<< "  * Player 2 may not fill a tile already filled by player 1" << endl << "4. Press play and enjoy !" << endl;

			cout << endl << "--------------------RULES--------------------" << endl;
			cout << "For a space that is filled/populated: " << endl;
			cout << "- Each cell with one or no neighbors dies, as if by solitude." << endl;
			cout << "- Each cell with four or more neighbors dies, as if by overpopulation." << endl;
			cout << "- Each cell with two or three neighbors survives." << endl << endl;
			cout << "For a space that is empty/unpopulated: " << endl;
			cout << "- Each cell with three neighbors becomes filled/populated." << endl;
			cout << "	* For 2 players when a cell becomes populated it takes on the color of the morjority of the neighbors" << endl << endl;

			cout << "Game ends when game board repeats the same patters indefinetly or all cells die" << endl;
			cout << "	* For 2 players whoever ends up with the most amount of tiles on the board wins !" << endl;

			system("pause");
			system("cls");
		}
		else
		{

			cout << "Enter 1 or 2 players: ";
			cin >> numPlayer;
			if (numPlayer == 2)
			{
				cout << "Player 1 enters tiles first" << endl;
				cout << "Press 'N' for next player for player 2 to enter tiles" << endl;
			}

			cout << endl << "*******Controls********" << endl;
			cout << "'S' to Start" << endl << "'P' to Pause" << endl << "   * When game is paused player/players may fill more tiles as desired" << endl << "'X' to Exit" << endl;
		}
	}

	sf::RenderWindow window(sf::VideoMode(1000, 1000), "Conways Game of Life!");
	Board* initial_board = new Board(window);

	int player = 1;
	int start = 0;
	while (window.isOpen())
	{
		window.draw(Start);
		window.draw(Pause);
		window.draw(Stop);

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		
		
	    if (!start) // basically loops until a key is pressed that starts game of life
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

				if (!sf::Mouse::isButtonPressed(sf::Mouse::Left)) 
				{

					sound.setBuffer(buffer);
					sound.play();
					
				}
			}
			
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			if(Start.checkClick(window))
			{
				start = 1;//implement button
			}

		}

		if (start) {
			initial_board->check_board(window);
			Sleep(800);

			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
			if (Pause.checkClick(window))
			{
				start = 0;
				player = 1;
				//break;
				//system("pause");

			}
		}

		//if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
		if(Stop.checkClick(window))
		{

			window.close();
			break;
		}
	}

	return 0;

}