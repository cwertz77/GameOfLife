#pragma once

#include <SFML/Graphics.hpp>
#pragma once
#include "Tile.h"

class Board : public sf::RenderWindow
{
public:
	// initializes board - sets all tiles to false
	Board();	
	Tile board[50][50];
private:


	// checks which cells on a board live or die
	void check_board(Tile board[][50]);
	// checks the surrounding area of a single cell
	int check_surrounding(Tile board[][50], int row, int col);
};