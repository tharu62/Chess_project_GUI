#include <iostream>

using namespace std;

#pragma once

enum player_color { white = 0, black = 1, red = 2 };

class Piece
{
public:
	player_color color;
	string name;
	int row;
	int col;
	bool** moveset;
	bool** attackset;
};

class Board
{	
public:
	Board();
	~Board();
	bool** attackset(int row, int col);
	bool** moveset(int row, int col);
	bool** special_moveset(int id);
	string nameset(int row, int col);
	string special_nameset(int id);
	void init_board();
	bool valid_attack(int row, int col, Piece piece);
	bool castle_possible(player_color color, int col);
	bool valid_move(int row, int col, Piece piece);
	void make_virtual_move(int row, int col, Piece piece);
	void make_move(int row, int col, Piece piece);
	bool virtual_turn(player_color color, int dest_row, int dest_col, int piece_row, int piece_col);
	void pawn_promotion();
	bool virtual_king_under_check(player_color color);
	bool king_under_check(player_color color);
	bool checkmate(player_color color);
	int controlled_input_integer();
	int controlled_input_integer_2();
	int controlled_input_char();
	int white_turn();
	int black_turn();

	Piece grid[8][8];
	int turn = 0;
	int piece_row = 0;
	int piece_col = 0;
	int dest_row = 0;
	int dest_col = 0;
	bool en_passant = false;
	int en_passant_column = 0;
	int en_passant_row = 0;
	bool castle_black_R = true;
	bool castle_black_L = true;
	bool castle_white_R = true;
	bool castle_white_L = true;
	
};

