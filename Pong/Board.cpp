#include "Board.h"
#include <SFML/Graphics.hpp>

// constructor for board
Board::Board(sf::RenderWindow &window)
{
	//sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			Player tile_current(sf::Vector2f(20 * i, 20* j), sf::Vector2f(20, 20), sf::Color::White); // sets all initial squares to 5x5, white
			board[i][j] = tile_current;
			window.draw(board[i][j]);

		}
	}
	window.display();

}
void Board::check_board(/*Tile board[][40]*/sf::RenderWindow& window)
{
	Player newboard[50][40];
	int fillColor = 0;
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 40; j++) // loops through entire board
		{
			newboard[i][j] = board[i][j]; // copies the old board elements to the new board
			int num_surrounding = check_surrounding(i, j, &fillColor);
			if (num_surrounding <= 1) // there are not enough tiles surrounding and the current tile is populated
			{
				if (board[i][j].getFill() == true)
				{
					newboard[i][j].setFill(false); // the current tile dies on the next board
				}
			}
			else if (num_surrounding == 3 && board[i][j].getFill() == false) // there are 3 surrounding; new cell can grow
			{
				if (fillColor == 1)
					newboard[i][j].setPlayer(1);
				else
					newboard[i][j].setPlayer(2);
				newboard[i][j].setFill(true);
			}
			else if (num_surrounding >= 4 && board[i][j].getFill() == true) // overpopulation
			{
				newboard[i][j].setFill(false);
			}
			//else
			//{
			//	newboard[i][j] = board[i][j];
			//}
		
			
		}
	}	
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			board[i][j] = newboard[i][j];
			window.draw(board[i][j]);
		}
	}
	window.display();
}
// check surrounding
int Board::check_surrounding(/*Tile board[][40], */int row, int col, int *playerFill)
{
	int num_surrounding = 0;
	int player1=0, player2=0;

	// adds 1 to num surrounding if they are filled
	if (row >= 1 && col >= 1 && row < 49 && col < 39)
	{
		if (board[row - 1][col - 1].getFill() == true)
		{
			if (board[row - 1][col - 1].getPlayer() == 1)
				player1++;
			else
				player2++;
			num_surrounding++;
		}
		if (board[row - 1][col].getFill() == true)
		{
			if (board[row - 1][col].getPlayer() == 1)
				player1++;
			else
				player2++;
			num_surrounding++;
		}
		if (board[row][col - 1].getFill() == true)
		{
			if (board[row][col - 1].getPlayer() == 1)
				player1++;
			else
				player2++;
			num_surrounding++;
		}
		if (board[row + 1][col + 1].getFill() == true)
		{
			if (board[row + 1][col + 1].getPlayer() == 1)
				player1++;
			else
				player2++;
			num_surrounding++;
		}
		if (board[row][col + 1].getFill() == true)
		{
			if (board[row][col + 1].getPlayer() == 1)
				player1++;
			else
				player2++;
			num_surrounding++;
		}
		if (board[row + 1][col].getFill() == true)
		{
			if (board[row + 1][col].getPlayer() == 1)
				player1++;
			else
				player2++;
			num_surrounding++;
		}
		if (board[row + 1][col - 1].getFill() == true)
		{
			if (board[row + 1][col - 1].getPlayer() == 1)
				player1++;
			else
				player2++;
			num_surrounding++;
		}
		if (board[row - 1][col + 1].getFill() == true)
		{
			if (board[row - 1][col + 1].getPlayer() == 1)
				player1++;
			else
				player2++;
			num_surrounding++;
		}
	}

	player1 > player2 ? *playerFill = 1 : *playerFill = 2;
	// returns the number of surrounding tiles - is then used to determine underpopulated, populated, or overpopulated
	return num_surrounding;
}

// finds click location
void Board::find_click(sf::RenderWindow& window, int player)
{
	sf::Vector2i localPosition = sf::Mouse::getPosition(window);
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			if (localPosition.x >= i * 20 && localPosition.x <= (i * 20 + 20) && localPosition.y >= j * 20 && localPosition.y <= j * 20 + 20)
			{
				board[i][j].setPlayer(player);
				board[i][j].setFill(1);
				
			}
			window.draw(board[i][j]);
		}
	}
	window.display();

}
