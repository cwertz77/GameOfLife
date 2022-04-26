
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
	sf::RenderWindow window(sf::VideoMode(1000, 1500), "Conways Game of Life!");
	Board* initial_board = new Board(window);

<<<<<<< HEAD

	sf::Texture texture;
	sf::Texture texture1;
	/*texture.loadFromFile("b1.png");
	texture1.loadFromFile("b2.png");*/
	if (!texture.loadFromFile("b1.png"))
	{
		return -1;
	}
	if (!texture1.loadFromFile("b3.png"))
	{
		return -1;
	}
	
	sf::Sprite button1;
	button1.setPosition(sf::Vector2f(500, 900));
	button1.setTexture(texture);
	button1.setTexture(texture1);

	button1.setScale(.2, .2);

    Button Start = Button(&texture, &texture1, sf::Vector2f(500, 900));
	Button Pause = Button(&texture, &texture1, sf::Vector2f(500, 1100));
	Button Stop = Button(&texture, &texture1, sf::Vector2f(500, 1300));

	sf::SoundBuffer buffer;
	sf::Sound sound;


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
			cout << "1. Player 1 enter configureation of tiles" << endl << "2. Press 'N' key for next player" << endl << "3. Player 2 to enter configuration of tiles" << endl << "4. Press play and enjoy !" << endl;
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
				cout << "Press N for next player for player 2 to enter tiles" << endl;
			}
			/*if (numPlayer != 0)
				ready = true;*/
		}
	}

	while (window.isOpen())
	{
		Start.draw(window);
		//
		Pause.draw(window);
		Stop.draw(window);
		Start.set_text("Start");
		Pause.set_text("Pause");
		Stop.set_text("Stop");
		//window.draw(button1);
		//Pause.draw(window);
		//Stop.draw(window);
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		int start = 0;
		int player = 1;
		
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
					if (!buffer.loadFromFile("click.wav"))
					{
						cout << "error loading file" << endl;
					}
					else {
						sound.setBuffer(buffer);
						sound.play();
						//sound.pause();
					}
				}
			}
			
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			if(Start.checkClick(window))
			{
				start = 1;//implement button
			}

		}
			initial_board->check_board(window);
			//Sleep(800);
			if (Pause.checkClick(window))
			{
				start = 0;
				//break;
				system("pause");

			}
			//if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
			if(Stop.checkClick(window))
			{

				window.close();
				break;
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