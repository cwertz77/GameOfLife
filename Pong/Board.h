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

	// checks which cells on a board live or die
	void check_board(Tile board[][100]);
	// checks the surrounding area of a single cell
	int check_surrounding(Tile board[][100], int row, int col);
};