#include <iostream>
using namespace std;

#pragma once

class Piece
{
	enum player_color { white = 0, black = 1 , red = 2};
public:
	player_color color;
	string name;
	int row;
	int col;
	bool** moveset;
	bool** attackset;
};

