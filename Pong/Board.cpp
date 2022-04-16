#include "Board.h"

// constructor for board
Board::Board()
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			board[i][j].setFill(false); // sets fill to default color
		}
	}
}
void Board::check_board(Tile board[][100])
{
	Tile newboard[100][100];
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++) // loops through entire board
		{
			int num_surrounding = check_surrounding(board, i, j);
			if (num_surrounding == 0 && board[i][j].getFill() == true) // there are no tiles surrounding and the current tile is populated
			{
				newboard[i][j].setFill(false); // the current tile dies on the next board
			}
			else
			{
				newboard[i][j] = board[i][j];
			}
		}
	}
}
// check surrounding
int Board::check_surrounding(Tile board[][100], int row, int col)
{
	int num_surrounding = 0;

	// adds 1 to num surrounding if they are filled
	if (board[row - 1][col - 1].getFill() == true)
	{

	}
	// returns the number of surrounding tiles - is then used to determine underpopulated, populated, or overpopulated
	return num_surrounding;
}
