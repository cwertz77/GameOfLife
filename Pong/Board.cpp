#include "Board.h"

// constructor for board
Board::Board()
{
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			Tile tile_current(sf::Vector2f(10 * i, 10* j), sf::Vector2f(10, 10), sf::Color::White); // sets all initial squares to 5x5, white
			board[i][j] = tile_current;
		}
	}
}
void Board::check_board(Tile board[][50])
{
	Tile newboard[50][50];
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++) // loops through entire board
		{
			newboard[i][j] = board[i][j]; // copies the old board elements to the new board
			int num_surrounding = check_surrounding(board, i, j);
			if (num_surrounding <= 1) // there are not enough tiles surrounding and the current tile is populated
			{
				if (board[i][j].getFill() == true)
				{
					newboard[i][j].setFill(false); // the current tile dies on the next board
				}
			}
			else if (num_surrounding == 3 && board[i][j].getFill() == false) // there are 3 surrounding; new cell can grow
			{
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
}
// check surrounding
int Board::check_surrounding(Tile board[][50], int row, int col)
{
	int num_surrounding = 0;

	// adds 1 to num surrounding if they are filled
	if (board[row - 1][col - 1].getFill() == true)
	{
		num_surrounding++;
	}
	if (board[row - 1][col].getFill() == true)
	{
		num_surrounding++;
	}
	if (board[row][col - 1].getFill() == true)
	{
		num_surrounding++;
	}
	if (board[row + 1][col + 1].getFill() == true)
	{
		num_surrounding++;
	}
	if (board[row][col + 1].getFill() == true)
	{
		num_surrounding++;
	}
	if (board[row + 1][col].getFill() == true)
	{
		num_surrounding++;
	}
	if (board[row + 1][col - 1].getFill() == true)
	{
		num_surrounding++;
	}
	if (board[row - 1][col + 1].getFill() == true)
	{
		num_surrounding++;
	}

	// returns the number of surrounding tiles - is then used to determine underpopulated, populated, or overpopulated
	return num_surrounding;
}
