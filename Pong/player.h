/***

* Programmer: Charlotte Wertz, Janelle Kau, Analysse Palomares, Anika Khan

* Class: CptS 122

* Programming Assignment: Programming assignment 9

* Description: This program will allow 2 players to play conways game of life.
*
***/

#pragma once

#include <SFML/Graphics.hpp>

#include "Tile.h"

class Player : public Tile
{
public:
	using Tile::Tile;
	Player(int newPlayer = 0);
	void setFill(bool newFill);

	void setPlayer(int newPlayer);

	int getPlayer();

private:
	int player=0;
};