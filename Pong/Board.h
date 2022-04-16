#pragma once

#include <SFML/Graphics.hpp>
#pragma once
#include "Tile.h"

class Board
{
public:
	// initializes board - sets all tiles to false
	Board();
private:
	Tile board[100][100];
<<<<<<< HEAD
	void check_board(Tile board[][]);
	int check_surrounding(Tile board[][], int row, int col);
};
//edit
Board::Board()
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			board[i][j].setFill(false);
		}
	}
}
void Board::check_board(Tile board[][])
{
	Tile newboard[100][100];
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			int num_surrounding = check_surrounding(board, i, j);
			if (num_surrounding == 0 && board[i][j].getFill == true)
			{
				newboard[i][j].setFill(false);
			}
			else
			{
				newboard[i][j] = board[i][j];
			}
		}
	}
}
// check surrounding
int Board::check_surrounding(Tile board[][], int row, int col)
{
	int num_surrounding = 0;
	if (board[row - 1][col - 1].getFill() == true)
	{
=======
>>>>>>> f8b91b32f3e008c41c4c75c53c34c5975c1b9ac2

	// checks which cells on a board live or die
	void check_board(Tile board[][100]);
	// checks the surrounding area of a single cell
	int check_surrounding(Tile board[][100], int row, int col);
};