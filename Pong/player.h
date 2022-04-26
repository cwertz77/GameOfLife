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