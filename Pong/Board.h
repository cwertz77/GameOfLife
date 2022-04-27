/***

* Programmer: Charlotte Wertz, Janelle Kau, Analysse Palomares, Anika Khan

* Class: CptS 122

* Programming Assignment: Programming assignment 9

* Description: This program will allow 2 players to play conways game of life.
*
***/

#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <Windows.h>

#pragma once
#include "player.h"
using std::string;
class Board
{
public:
	// initializes board - sets all tiles to false
	Board(sf::RenderWindow &window);
	sf::RenderWindow window(sf::VideoMode(int size, int size1), string name);
	Player board[50][40];
	void find_click(sf::RenderWindow& window, int player);
	void check_board(/*Tile board[][40]*/sf::RenderWindow& window);

private:

	// checks which cells on a board live or die
	// checks the surrounding area of a single cell
	int check_surrounding(/*Tile board[][40], */int row, int col, int *playerFill);

};