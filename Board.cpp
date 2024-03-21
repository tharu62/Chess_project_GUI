#include "Board.h"
using namespace std;
#define INVALID -1

Board virtual_board = Board();

Board::Board()
{
}

Board::~Board()
{
}

bool** Board::attackset(int row, int col) 
{
    bool** moveset = new bool* [17];
    for (int i = 0; i < 17; ++i) {
        moveset[i] = new bool[17];
    }

    if (row == 0 || row == 7) {
        switch (col)
        {
            // TORRE    
        case 0:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (row == 8 || col == 8) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

        case 7:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (row == 8 || col == 8) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

            // CAVALLO
        case 1:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (((row == 6 || row == 10) && (col == 7 || col == 9)) || ((row == 7 || row == 9) && (col == 6 || col == 10))) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

        case 6:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (((row == 6 || row == 10) && (col == 7 || col == 9)) || ((row == 7 || row == 9) && (col == 6 || col == 10))) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

            // ALFIERE
        case 2:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (row == col || col == (16 - row)) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

        case 5:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (row == col || col == (16 - row)) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

            // REGINA
        case 3:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (row == 8 || col == 8) {
                        moveset[row][col] = true;
                    }
                    else {
                        if (row == col || col == (16 - row)) {
                            moveset[row][col] = true;
                        }
                        else {

                            if ((row > 6 && row < 10) && (col > 6 && col < 10)) {
                                moveset[row][col] = true;
                            }
                            else {
                                moveset[row][col] = false;
                            }

                        }
                    }
                }
            }
            return moveset;

            // RE
        case 4:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if ((row > 6 && row < 10) && (col > 6 && col < 10)) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

        default:
            break;
        }

    }
    else {

        if (row == 1 || row == 6) {
            // PEDINA
            if (grid[row][col].color == black) {

                for (int row = 0; row < 17; row++) {
                    for (int col = 0; col < 17; col++) {
                        if (row == 9 && (col == 7 || col == 9)) {
                            moveset[row][col] = true;
                        }
                        else {
                            moveset[row][col] = false;
                        }
                    }
                }

            }
            else {

                for (int row = 0; row < 17; row++) {
                    for (int col = 0; col < 17; col++) {
                        if (row == 7 && (col == 7 || col == 9)) {
                            moveset[row][col] = true;
                        }
                        else {
                            moveset[row][col] = false;
                        }
                    }
                }

            }

            return moveset;
        }
        else {

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    moveset[row][col] = false;
                }
            }
            return moveset;

        }


    }
    return moveset;
}

bool** Board::moveset(int row, int col)
{
    bool** moveset = new bool* [17];
    for (int i = 0; i < 17; ++i) {
        moveset[i] = new bool[17];
    }

    if (row == 0 || row == 7) {
        switch (col)
        {
            // TORRE    
        case 0:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (row == 8 || col == 8) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

        case 7:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (row == 8 || col == 8) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

            // CAVALLO
        case 1:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (((row == 6 || row == 10) && (col == 7 || col == 9)) || ((row == 7 || row == 9) && (col == 6 || col == 10))) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

        case 6:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (((row == 6 || row == 10) && (col == 7 || col == 9)) || ((row == 7 || row == 9) && (col == 6 || col == 10))) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

            // ALFIERE
        case 2:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (row == col || col == (16 - row)) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

        case 5:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (row == col || col == (16 - row)) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

            // REGINA
        case 3:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if (row == 8 || col == 8) {
                        moveset[row][col] = true;
                    }
                    else {
                        if (row == col || col == (16 - row)) {
                            moveset[row][col] = true;
                        }
                        else {

                            if ((row > 6 && row < 10) && (col > 6 && col < 10)) {
                                moveset[row][col] = true;
                            }
                            else {
                                moveset[row][col] = false;
                            }

                        }
                    }
                }
            }
            return moveset;

            // RE
        case 4:

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    if ((row > 6 && row < 10) && (col > 6 && col < 10)) {
                        moveset[row][col] = true;
                    }
                    else {
                        moveset[row][col] = false;
                    }
                }
            }
            return moveset;

        default:
            break;
        }

    }
    else {

        if (row == 1 || row == 6) {
            // PEDINA
            if (grid[row][col].color == black) {
                for (int row = 0; row < 17; row++) {
                    for (int col = 0; col < 17; col++) {
                        if ((row == 7 || row == 6) && col == 8) {
                            moveset[row][col] = true;
                        }
                        else {
                            moveset[row][col] = false;
                        }
                    }
                }

            }
            else {

                for (int row = 0; row < 17; row++) {
                    for (int col = 0; col < 17; col++) {
                        if ((row == 9 || row == 10) && col == 8) {
                            moveset[row][col] = true;
                        }
                        else {
                            moveset[row][col] = false;
                        }
                    }
                }

            }

            return moveset;
        }
        else {

            for (int row = 0; row < 17; row++) {
                for (int col = 0; col < 17; col++) {
                    moveset[row][col] = false;
                }
            }
            return moveset;

        }
    }
    return moveset;
}

bool** Board::special_moveset(int id) 
{
    bool** moveset = new bool* [17];
    for (int i = 0; i < 17; ++i) {
        moveset[i] = new bool[17];
    }

    switch (id)
    {
    case 0: // PEDONE DOPO PRIMA MOSSA BIANCO
        for (int row = 0; row < 17; row++) {
            for (int col = 0; col < 17; col++) {
                if (row == 7 && (col == 7 || col == 8 || col == 9)) {
                    moveset[row][col] = true;
                }
                else {
                    moveset[row][col] = false;
                }
                /**
                if(row == 7 && col == 8){
                    moveset[row][col] = true;
                }else{
                    moveset[row][col] = false;
                }*/
            }
        }
        return moveset;

    case 1: // PEDONE DOPO PIRMA MOSSA NERO
        for (int row = 0; row < 17; row++) {
            for (int col = 0; col < 17; col++) {
                if (row == 9 && (col == 7 || col == 8 || col == 9)) {
                    moveset[row][col] = true;
                }
                else {
                    moveset[row][col] = false;
                }
                /**
               if(row == 9 && col == 8){
                    moveset[row][col] = true;
                }else{
                    moveset[row][col] = false;
                }
                */
            }
        }
        return moveset;

    default:
        return moveset;
    }
}

string Board::nameset(int row, int col)
{
    if (row == 0 || row == 7) {

        switch (col)
        {
        case 0:

            return " rook ";

        case 1:

            return "horse ";

        case 2:

            return "bishop";

        case 3:

            return " queen";

        case 4:

            return " king ";

        case 5:

            return "bishop";

        case 6:

            return " horse";

        case 7:

            return " rook ";

        default:
            break;
        }

    }
    else {

        if (row == 1 || row == 6) {
            return " pawn ";
        }
        else {
            return " void ";
        }
    }
}

string Board::special_nameset(int id)
{
    switch (id)
    {
    case 0:
        return " bird ";

    default:
        return "pingu ";
    }
}

void Board::init_board()
{
    for (int row = 0; row < 8; row++) {

        for (int col = 0; col < 8; col++) {

            if (row < 2) {
                grid[row][col].color = black;
            }
            if (row > 5) {
                grid[row][col].color = white;
            }
            if (row > 1 && row < 6) {
                grid[row][col].color = red;
            }
            grid[row][col].name = nameset(row, col);
            grid[row][col].moveset = moveset(row, col);
            grid[row][col].attackset = attackset(row, col);
            grid[row][col].row = row;
            grid[row][col].col = col;

        }

    }
    turn = 0;
}

bool Board::valid_attack(int row, int col, Piece piece)
{
    if (row == piece.row && col == piece.col) {
        return false;
    }

    if (piece.name == " horse" || piece.name == "horse ") {
        if (piece.row > row && piece.col > col) {

            if (piece.attackset[8 + (piece.row - row)][8 + (piece.col - col)] && grid[row][col].color != piece.color) {
                return true;
            }
        }
        if (piece.row < row && piece.col < col) {
            if (piece.attackset[8 - (row - piece.row)][8 - (col - piece.col)] && grid[row][col].color != piece.color) {
                return true;
            }
        }
        if (piece.row > row && piece.col < col) {
            if (piece.attackset[8 + (piece.row - row)][8 - (col - piece.col)] && grid[row][col].color != piece.color) {
                return true;
            }
        }
        if (piece.row < row && piece.col > col) {
            if (piece.attackset[8 - (row - piece.row)][8 + (piece.col - col)] && grid[row][col].color != piece.color) {
                return true;
            }
        }
        return false;
    }

    if (piece.name == " pawn ") {
        if (piece.row > row && piece.col > col) {
            if (piece.attackset[8 - (piece.row - row)][8 - (piece.col - col)]) {
                if (grid[row][col].color != red && grid[row][col].color != piece.color) {
                    return true;
                }
            }
        }
        if (piece.row < row && piece.col < col) {
            if (piece.attackset[8 + (row - piece.row)][8 + (col - piece.col)]) {
                if (grid[row][col].color != red && grid[row][col].color != piece.color) {
                    return true;
                }
            }
        }
        if (piece.row > row && piece.col < col) {
            if (piece.attackset[8 - (piece.row - row)][8 + (col - piece.col)]) {
                if (grid[row][col].color != red && grid[row][col].color != piece.color) {
                    return true;
                }
            }
        }
        if (piece.row < row && piece.col > col) {
            if (piece.attackset[8 + (row - piece.row)][8 - (piece.col - col)]) {
                if (grid[row][col].color != red && grid[row][col].color != piece.color) {
                    return true;
                }
            }
        }
        return false;
    }

    // diagonale superiore sinistra
    if (piece.row > row && piece.col > col) {
        if (piece.attackset[8 + (piece.row - row)][8 + (piece.col - col)]) {
            int temp_col = piece.col - 1;
            for (int temp_row = piece.row - 1; temp_row >= row; temp_row--) {
                if (temp_col < col) {
                    break;
                }
                if (grid[temp_row][temp_col].color != red) {
                    if (temp_row == row && temp_col == col && grid[temp_row][temp_col].color != piece.color) {
                        return true;
                    }
                    return false;
                }
                temp_col--;
            }
        }
        else {
            return false;
        }
    }

    // diagonale inferiore destra
    if (piece.row < row && piece.col < col) {
        if (piece.attackset[8 - (row - piece.row)][8 - (col - piece.col)]) {
            int temp_col = piece.col + 1;
            for (int temp_row = piece.row + 1; temp_row <= row; temp_row++) {
                if (temp_col > col) {
                    break;
                }
                if (grid[temp_row][temp_col].color != red) {
                    if (temp_row == row && temp_col == col && grid[temp_row][temp_col].color != piece.color) {
                        return true;
                    }
                    return false;
                }
                temp_col++;
            }
        }
        else {
            return false;
        }
    }

    // diagonale superiore destra
    if (piece.row > row && piece.col < col) {
        if (piece.attackset[8 + (piece.row - row)][8 - (col - piece.col)]) {
            int temp_col = piece.col + 1;
            for (int temp_row = piece.row - 1; temp_row >= row; temp_row--) {
                if (temp_col > col) {
                    break;
                }
                if (grid[temp_row][temp_col].color != red) {
                    if (temp_row == row && temp_col == col && grid[temp_row][temp_col].color != piece.color) {
                        return true;
                    }
                    return false;
                }
                temp_col++;
            }
        }
        else {
            return false;
        }
    }

    // diagonale inferiore sinistra
    if (piece.row < row && piece.col > col) {
        if (piece.attackset[8 - (row - piece.row)][8 + (piece.col - col)]) {
            int temp_col = piece.col - 1;
            for (int temp_row = piece.row + 1; temp_row <= row; temp_row++) {
                if (temp_col < col) {
                    break;
                }
                if (grid[temp_row][temp_col].color != red) {
                    if (temp_row == row && temp_col == col && grid[temp_row][temp_col].color != piece.color) {
                        return true;
                    }
                    return false;
                }
                temp_col--;
            }
        }
        else {
            return false;
        }
    }

    // colonna orizzonatale
    if (piece.row == row) {
        // destra
        if (piece.col < col) {
            if (piece.attackset[8][8 + (col - piece.col)]) {
                for (int temp_col = piece.col + 1; temp_col <= col; temp_col++) {
                    if (grid[piece.row][temp_col].color != red) {
                        if (temp_col == col && grid[piece.row][temp_col].color != piece.color) {
                            return true;
                        }
                        return false;
                    }
                }
            }
            else {
                return false;
            }
        }
        else {
            // sinistra    
            if (piece.attackset[8][8 - (piece.col - col)]) {
                for (int temp_col = piece.col - 1; temp_col >= col; temp_col--) {
                    if (grid[piece.row][temp_col].color != red) {
                        if (temp_col == col && grid[piece.row][temp_col].color != piece.color) {
                            return true;
                        }
                        return false;
                    }
                }

            }
            else {
                return false;
            }
        }
    }

    // colonna verticale
    if (piece.col == col) {
        // inferiore
        if (piece.row < row) {
            if (piece.attackset[8 - (row - piece.row)][8]) {
                for (int temp_row = piece.row + 1; temp_row <= row; temp_row++) {
                    if (grid[temp_row][piece.col].color != red) {
                        if (temp_row == row && grid[temp_row][piece.col].color != piece.color) {
                            return true;
                        }
                        return false;
                    }
                }
            }
            else {
                return false;
            }
        }
        else {
            // superiore
            if (piece.attackset[8 + (piece.row - row)][8]) {
                for (int temp_row = piece.row - 1; temp_row >= row; temp_row--) {
                    if (grid[temp_row][piece.col].color != red) {
                        if (temp_row == row && grid[temp_row][piece.col].color != piece.color) {
                            return true;
                        }
                        return false;
                    }
                }

            }
            else {
                return false;
            }
        }
    }

    return true;
}

bool Board::castle_possible(player_color color, int col)
{
    switch (color)
    {
    case white:

        switch (col)
        {
        case 2:
            for (int temp_col = 1; temp_col < 4; temp_col++) {
                if (grid[7][temp_col].color != red) {
                    return false;
                }
            }
            for (int temp_col = 1; temp_col < 4; temp_col++) {
                for (int r = 0; r < 8; r++) {
                    for (int c = 0; c < 8; c++) {
                        if (grid[r][c].color != color && grid[r][c].color != red && valid_attack(7, temp_col, grid[r][c])) {
                            return false;
                        }
                    }
                }
            }
            break;
        case 6:
            for (int temp_col = 5; temp_col < 7; temp_col++) {
                if (grid[7][temp_col].color != red) {
                    return false;
                }
            }
            for (int temp_col = 5; temp_col < 7; temp_col++) {
                for (int r = 0; r < 8; r++) {
                    for (int c = 0; c < 8; c++) {
                        if (grid[r][c].color != color && grid[r][c].color != red && valid_attack(7, temp_col, grid[r][c])) {
                            return false;
                        }
                    }
                }
            }
            break;
        }
        break;

    case black:

        switch (col)
        {
        case 2:
            for (int temp_col = 1; temp_col < 4; temp_col++) {
                if (grid[0][temp_col].color != red) {
                    return false;
                }
            }
            for (int temp_col = 1; temp_col < 4; temp_col++) {
                for (int r = 0; r < 8; r++) {
                    for (int c = 0; c < 8; c++) {
                        if (grid[r][c].color != color && grid[r][c].color != red && valid_attack(0, temp_col, grid[r][c])) {
                            return false;
                        }
                    }
                }
            }
            break;
        case 6:
            for (int temp_col = 5; temp_col < 7; temp_col++) {
                if (grid[0][temp_col].color != red) {
                    return false;
                }
            }
            for (int temp_col = 5; temp_col < 7; temp_col++) {
                for (int r = 0; r < 8; r++) {
                    for (int c = 0; c < 8; c++) {
                        if (grid[r][c].color != color && grid[r][c].color != red && valid_attack(0, temp_col, grid[r][c])) {
                            return false;
                        }
                    }
                }
            }
            break;
        }
        break;

    }

    return true;
}

bool Board::valid_move(int row, int col, Piece piece)
{
    if (row == piece.row && col == piece.col) {
        return false;
    }

    if (piece.name == " king ") {
        switch (piece.color)
        {
        case white:
            if (row == 7 && col == 2 && castle_white_L) {
                if (castle_possible(white, 2)) {
                    return true;
                }
            }
            if (row == 7 && col == 6 && castle_white_R) {
                if (castle_possible(white, 6)) {
                    return true;
                }
            }
            break;

        case black:
            if (row == 0 && col == 2 && castle_black_L) {
                if (castle_possible(black, 2)) {
                    return true;
                }
            }
            if (row == 0 && col == 6 && castle_black_R) {
                if (castle_possible(white, 6)) {
                    return true;
                }
            }
            break;

        default:
            break;
        }
    }

    if (piece.name == " horse" || piece.name == "horse ") {
        if (piece.row > row && piece.col > col) {

            if (piece.moveset[8 + (piece.row - row)][8 + (piece.col - col)] && grid[row][col].color != piece.color) {
                return true;
            }
        }
        if (piece.row < row && piece.col < col) {
            if (piece.moveset[8 - (row - piece.row)][8 - (col - piece.col)] && grid[row][col].color != piece.color) {
                return true;
            }
        }
        if (piece.row > row && piece.col < col) {
            if (piece.moveset[8 + (piece.row - row)][8 - (col - piece.col)] && grid[row][col].color != piece.color) {
                return true;
            }
        }
        if (piece.row < row && piece.col > col) {
            if (piece.moveset[8 - (row - piece.row)][8 + (piece.col - col)] && grid[row][col].color != piece.color) {
                return true;
            }
        }
        return false;
    }

    if (piece.name == " pawn ") {
        // colonna verticale
        if (piece.col == col) {
            // inferiore
            if (piece.row < row) {
                if (piece.moveset[8 - (row - piece.row)][8]) {
                    for (int temp_row = piece.row + 1; temp_row <= row; temp_row++) {
                        if (grid[temp_row][piece.col].color != red) {
                            return false;
                        }
                    }
                    return true;
                }
                else {
                    return false;
                }
            }
            else {
                // superiore
                if (piece.moveset[8 + (piece.row - row)][8]) {
                    for (int temp_row = piece.row - 1; temp_row >= row; temp_row--) {
                        if (grid[temp_row][piece.col].color != red) {
                            return false;
                        }
                    }
                    return true;
                }
                else {
                    return false;
                }
            }
        }
        if (piece.row > row && piece.col > col) {
            if (piece.moveset[8 + (piece.row - row)][8 + (piece.col - col)]) {
                // controllo en_passant
                if (grid[row][col].color == red && en_passant && col == en_passant_column) {
                    if (piece.color == white && row == en_passant_row - 1) {
                        return true;
                    }
                    if (piece.color == black && row == en_passant_row + 1) {
                        return true;
                    }
                }
            }
        }
        if (piece.row < row && piece.col < col) {
            if (piece.moveset[8 - (row - piece.row)][8 - (col - piece.col)]) {
                // controllo en_passant
                if (grid[row][col].color == red && en_passant && col == en_passant_column) {
                    if (piece.color == white && row == en_passant_row - 1) {
                        return true;
                    }
                    if (piece.color == black && row == en_passant_row + 1) {
                        return true;
                    }
                }
            }
        }
        if (piece.row > row && piece.col < col) {
            if (piece.moveset[8 + (piece.row - row)][8 - (col - piece.col)]) {
                // controllo en_passant
                if (grid[row][col].color == red && en_passant && col == en_passant_column) {
                    if (piece.color == white && row == en_passant_row - 1) {
                        return true;
                    }
                    if (piece.color == black && row == en_passant_row + 1) {
                        return true;
                    }
                }
            }
        }
        if (piece.row < row && piece.col > col) {
            if (piece.moveset[8 - (row - piece.row)][8 + (piece.col - col)]) {
                // controllo en_passant
                if (grid[row][col].color == red && en_passant && col == en_passant_column) {
                    if (piece.color == white && row == en_passant_row - 1) {
                        return true;
                    }
                    if (piece.color == black && row == en_passant_row + 1) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    // diagonale superiore sinistra
    if (piece.row > row && piece.col > col) {
        if (piece.moveset[8 + (piece.row - row)][8 + (piece.col - col)]) {
            int temp_col = piece.col - 1;
            for (int temp_row = piece.row - 1; temp_row >= row; temp_row--) {
                if (temp_col < col) {
                    break;
                }
                if (grid[temp_row][temp_col].color != red) {
                    if (temp_row == row && temp_col == col && grid[temp_row][temp_col].color != piece.color) {
                        return true;
                    }
                    return false;
                }
                temp_col--;
            }
        }
        else {
            return false;
        }
    }

    // diagonale inferiore destra
    if (piece.row < row && piece.col < col) {
        if (piece.moveset[8 - (row - piece.row)][8 - (col - piece.col)]) {
            int temp_col = piece.col + 1;
            for (int temp_row = piece.row + 1; temp_row <= row; temp_row++) {
                if (temp_col > col) {
                    break;
                }
                if (grid[temp_row][temp_col].color != red) {
                    if (temp_row == row && temp_col == col && grid[temp_row][temp_col].color != piece.color) {
                        return true;
                    }
                    return false;
                }
                temp_col++;
            }
        }
        else {
            return false;
        }
    }

    // diagonale superiore destra
    if (piece.row > row && piece.col < col) {
        if (piece.moveset[8 + (piece.row - row)][8 - (col - piece.col)]) {
            int temp_col = piece.col + 1;
            for (int temp_row = piece.row - 1; temp_row >= row; temp_row--) {
                if (temp_col > col) {
                    break;
                }
                if (grid[temp_row][temp_col].color != red) {
                    if (temp_row == row && temp_col == col && grid[temp_row][temp_col].color != piece.color) {
                        return true;
                    }
                    return false;
                }
                temp_col++;
            }
        }
        else {
            return false;
        }
    }

    // diagonale inferiore sinistra
    if (piece.row < row && piece.col > col) {
        if (piece.moveset[8 - (row - piece.row)][8 + (piece.col - col)]) {
            int temp_col = piece.col - 1;
            for (int temp_row = piece.row + 1; temp_row <= row; temp_row++) {
                if (temp_col < col) {
                    break;
                }
                if (grid[temp_row][temp_col].color != red) {
                    if (temp_row == row && temp_col == col && grid[temp_row][temp_col].color != piece.color) {
                        return true;
                    }
                    return false;
                }
                temp_col--;
            }
        }
        else {
            return false;
        }
    }

    // colonna orizzonatale
    if (piece.row == row) {
        // destra
        if (piece.col < col) {
            if (piece.moveset[8][8 + (col - piece.col)]) {
                for (int temp_col = piece.col + 1; temp_col <= col; temp_col++) {
                    if (grid[piece.row][temp_col].color != red) {
                        if (temp_col == col && grid[piece.row][temp_col].color != piece.color) {
                            return true;
                        }
                        return false;
                    }
                }
            }
            else {
                return false;
            }
        }
        else {
            // sinistra    
            if (piece.moveset[8][8 - (piece.col - col)]) {
                for (int temp_col = piece.col - 1; temp_col >= col; temp_col--) {
                    if (grid[piece.row][temp_col].color != red) {
                        if (temp_col == col && grid[piece.row][temp_col].color != piece.color) {
                            return true;
                        }
                        return false;
                    }
                }

            }
            else {
                return false;
            }
        }
    }

    // colonna verticale
    if (piece.col == col) {
        // inferiore
        if (piece.row < row) {
            if (piece.moveset[8 - (row - piece.row)][8]) {
                for (int temp_row = piece.row + 1; temp_row <= row; temp_row++) {
                    if (grid[temp_row][piece.col].color != red) {
                        if (temp_row == row && grid[temp_row][piece.col].color != piece.color) {
                            return true;
                        }
                        return false;
                    }
                }
            }
            else {
                return false;
            }
        }
        else {
            // superiore
            if (piece.moveset[8 + (piece.row - row)][8]) {

                for (int temp_row = piece.row - 1; temp_row >= row; temp_row--) {
                    if (grid[temp_row][piece.col].color != red) {
                        if (temp_row == row && grid[temp_row][piece.col].color != piece.color) {
                            return true;
                        }
                        return false;
                    }
                }

            }
            else {
                return false;
            }
        }
    }

    return true;
}

void Board::make_virtual_move(int row, int col, Piece piece)
{
    if ((virtual_board.turn == 1 && piece.color == white) || (virtual_board.turn == 0 && piece.color == black)) {
        cout << "\nMOVE NOT VALID\n";
        return;
    }

    if (piece.name == " king ") {
        switch (piece.color)
        {
        case white:
            if (row == 7 && col == 2) {
                virtual_board.grid[7][3].color = grid[7][0].color;
                virtual_board.grid[7][3].moveset = grid[7][0].moveset;
                virtual_board.grid[7][3].attackset = grid[7][0].attackset;
                virtual_board.grid[7][3].name = grid[7][0].name;
                virtual_board.grid[7][0].name = " void ";
                virtual_board.grid[7][0].color = red;
            }
            if (row == 7 && col == 6) {
                virtual_board.grid[7][5].color = grid[7][7].color;
                virtual_board.grid[7][5].moveset = grid[7][7].moveset;
                virtual_board.grid[7][5].attackset = grid[7][7].attackset;
                virtual_board.grid[7][5].name = grid[7][0].name;
                virtual_board.grid[7][7].name = " void ";
                virtual_board.grid[7][7].color = red;
            }
            break;
        case black:
            if (row == 0 && col == 2) {
                virtual_board.grid[0][3].color = grid[0][0].color;
                virtual_board.grid[0][3].moveset = grid[0][0].moveset;
                virtual_board.grid[0][3].attackset = grid[0][0].attackset;
                virtual_board.grid[0][3].name = grid[0][0].name;
                virtual_board.grid[0][0].name = " void ";
                virtual_board.grid[0][0].color = red;
            }
            if (row == 0 && col == 6) {
                virtual_board.grid[0][5].color = grid[0][7].color;
                virtual_board.grid[0][5].moveset = grid[0][7].moveset;
                virtual_board.grid[0][5].attackset = grid[0][7].attackset;
                virtual_board.grid[0][5].name = grid[0][0].name;
                virtual_board.grid[0][7].name = " void ";
                virtual_board.grid[0][7].color = red;
            }
            break;
        default:
            break;
        }
    }

    if (piece.row > row && piece.col > col) {

        virtual_board.grid[row][col].color = piece.color;
        virtual_board.grid[row][col].moveset = piece.moveset;
        virtual_board.grid[row][col].attackset = piece.attackset;
        virtual_board.grid[row][col].name = piece.name;
        virtual_board.grid[piece.row][piece.col].name = " void ";
        virtual_board.grid[piece.row][piece.col].color = red;

    }
    else {

        if (piece.row > row) {

            virtual_board.grid[row][col].color = piece.color;
            virtual_board.grid[row][col].moveset = piece.moveset;
            virtual_board.grid[row][col].attackset = piece.attackset;
            virtual_board.grid[row][col].name = piece.name;
            virtual_board.grid[piece.row][piece.col].name = " void ";
            virtual_board.grid[piece.row][piece.col].color = red;

        }
        else {

            if (piece.col > col) {

                virtual_board.grid[row][col].color = piece.color;
                virtual_board.grid[row][col].moveset = piece.moveset;
                virtual_board.grid[row][col].attackset = piece.attackset;
                virtual_board.grid[row][col].name = piece.name;
                virtual_board.grid[piece.row][piece.col].name = " void ";
                virtual_board.grid[piece.row][piece.col].color = red;

            }
            else {

                virtual_board.grid[row][col].color = piece.color;
                virtual_board.grid[row][col].moveset = piece.moveset;
                virtual_board.grid[row][col].attackset = piece.attackset;
                virtual_board.grid[row][col].name = piece.name;
                virtual_board.grid[piece.row][piece.col].name = " void ";
                virtual_board.grid[piece.row][piece.col].color = red;

            }

        }

    }
}

void Board::make_move(int row, int col, Piece piece)
{
    if (piece.name == " rook ") {
        switch (piece.color)
        {
        case white:
            if (col == 0 && castle_white_L) {
                castle_white_L = false;
            }
            if (col == 7 && castle_white_R) {
                castle_white_R = false;
            }
            break;
        case black:
            if (col == 0 && castle_black_L) {
                castle_black_L = false;
            }
            if (col == 7 && castle_white_R) {
                castle_black_R = false;
            }
            break;
        default:
            break;
        }
    }

    if (piece.name == " king ") {
        switch (piece.color)
        {
        case white:
            castle_white_L = false;
            castle_white_R = false;
            if (row == 7 && col == 2) {
                grid[7][3].color = grid[7][0].color;
                grid[7][3].moveset = grid[7][0].moveset;
                grid[7][3].attackset = grid[7][0].attackset;
                grid[7][3].name = grid[7][0].name;
                grid[7][0].name = " void ";
                grid[7][0].color = red;
            }
            if (row == 7 && col == 6) {
                grid[7][5].color = grid[7][7].color;
                grid[7][5].moveset = grid[7][7].moveset;
                grid[7][5].attackset = grid[7][7].attackset;
                grid[7][5].name = grid[7][0].name;
                grid[7][7].name = " void ";
                grid[7][7].color = red;
            }
            break;
        case black:
            castle_black_L = false;
            castle_black_R = false;
            if (row == 0 && col == 2) {
                grid[0][3].color = grid[0][0].color;
                grid[0][3].moveset = grid[0][0].moveset;
                grid[0][3].attackset = grid[0][0].attackset;
                grid[0][3].name = grid[0][0].name;
                grid[0][0].name = " void ";
                grid[0][0].color = red;
            }
            if (row == 0 && col == 6) {
                grid[0][5].color = grid[0][7].color;
                grid[0][5].moveset = grid[0][7].moveset;
                grid[0][5].attackset = grid[0][7].attackset;
                grid[0][5].name = grid[0][0].name;
                grid[0][7].name = " void ";
                grid[0][7].color = red;
            }
            break;
        default:
            break;
        }
    }

    if (en_passant) {

        if (piece.name == " pawn ") {
            switch (piece.color)
            {
            case white:
                if (row == en_passant_row - 1 && col == en_passant_column) {
                    grid[en_passant_row][en_passant_column].color = red;
                }
                break;
            case black:
                if (row == en_passant_row + 1 && col == en_passant_column) {
                    grid[en_passant_row][en_passant_column].color = red;
                }
                break;

            default:
                break;
            }

        }
        en_passant = false;
    }

    if (piece.name == " pawn ") {
        switch (piece.color) {
        case white:
            if (piece.row == 6 && row == 4) {
                en_passant = true;
                en_passant_column = col;
                en_passant_row = row;
            }
            break;
        case black:
            if (piece.row == 1 && row == 3) {
                en_passant = true;
                en_passant_column = col;
                en_passant_row = row;
            }
            break;

        default:
            break;
        }
    }

    if (piece.row > row && piece.col > col) {

        grid[row][col].color = piece.color;
        grid[row][col].moveset = piece.moveset;
        grid[row][col].attackset = piece.attackset;
        grid[row][col].name = piece.name;
        grid[piece.row][piece.col].name = " void ";
        grid[piece.row][piece.col].color = red;

    }
    else {

        if (piece.row > row) {

            grid[row][col].color = piece.color;
            grid[row][col].moveset = piece.moveset;
            grid[row][col].attackset = piece.attackset;
            grid[row][col].name = piece.name;
            grid[piece.row][piece.col].name = " void ";
            grid[piece.row][piece.col].color = red;

        }
        else {

            if (piece.col > col) {

                grid[row][col].color = piece.color;
                grid[row][col].moveset = piece.moveset;
                grid[row][col].attackset = piece.attackset;
                grid[row][col].name = piece.name;
                grid[piece.row][piece.col].name = " void ";
                grid[piece.row][piece.col].color = red;

            }
            else {

                grid[row][col].color = piece.color;
                grid[row][col].moveset = piece.moveset;
                grid[row][col].attackset = piece.attackset;
                grid[row][col].name = piece.name;
                grid[piece.row][piece.col].name = " void ";
                grid[piece.row][piece.col].color = red;

            }

        }

    }
}

bool Board::virtual_turn(player_color color, int dest_row, int dest_col, int piece_row, int piece_col)
{
    virtual_board = *this;
    if (grid[dest_row][dest_col].color != red && grid[dest_row][dest_col].color != color) {
        if (valid_attack(dest_row, dest_col, grid[piece_row][piece_col])) {
            make_virtual_move(dest_row, dest_col, grid[piece_row][piece_col]);
        }
        else {
            cout << " INVALID ATTACK\n";
            return false;
        }
    }
    else {
        if (valid_move(dest_row, dest_col, grid[piece_row][piece_col])) {
            make_virtual_move(dest_row, dest_col, grid[piece_row][piece_col]);
        }
        else {
            cout << " INVALID MOVE\n";
            return false;
        }
    }
    return true;
}

void Board::pawn_promotion()
{
    int id = 0;
    cout << "QUESTO PEZZO PUO' ESSERE PROMOSSO!" << endl;
    cout << "Seleziona il nuovo pezzo per la  promozione: \n(1) REGINA\n(2) TORRE\n(3) ALFIERE\n(4) CAVALLO\n";
    cin >> id;
    while (cin.fail() || id < 1 || id > 4)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << " Puoi solo inserire numeri interi da 1 a 4.\n";
        cout << " Ritenta.\n";
        cin >> id;
    }

    if (grid[dest_row][dest_col].color == white) {

        switch (id)
        {
        case 1:
            grid[dest_row][dest_col].name = nameset(7, 4);
            grid[dest_row][dest_col].moveset = moveset(7, 4);
            break;
        case 2:
            grid[dest_row][dest_col].name = nameset(7, 0);
            grid[dest_row][dest_col].moveset = moveset(7, 0);
            break;
        case 3:
            grid[dest_row][dest_col].name = nameset(7, 2);
            grid[dest_row][dest_col].moveset = moveset(7, 2);
            break;
        case 4:
            grid[dest_row][dest_col].name = nameset(7, 1);
            grid[dest_row][dest_col].moveset = moveset(7, 1);
            break;
        default:
            cout << "VALORE ERRATO\n";
            break;
        }

    }
    else {

        switch (id)
        {
        case 1:
            grid[dest_row][dest_col].name = nameset(0, 4);
            grid[dest_row][dest_col].moveset = moveset(0, 4);
            break;
        case 2:
            grid[dest_row][dest_col].name = nameset(0, 0);
            grid[dest_row][dest_col].moveset = moveset(0, 0);
            break;
        case 3:
            grid[dest_row][dest_col].name = nameset(0, 2);
            grid[dest_row][dest_col].moveset = moveset(0, 2);
            break;
        case 4:
            grid[dest_row][dest_col].name = nameset(0, 1);
            grid[dest_row][dest_col].moveset = moveset(0, 1);
            break;
        default:
            cout << "VALORE ERRATO\n";
            break;
        }
    }
}

bool Board::virtual_king_under_check(player_color color)
{
    int king_row = 0;
    int king_col = 0;
    for (king_row = 0; king_row < 8; king_row++) {
        for (king_col = 0; king_col < 8; king_col++) {
            if (virtual_board.grid[king_row][king_col].name == " king " && virtual_board.grid[king_row][king_col].color == color) {
                goto endFor;
            }
        }
    }
endFor:

    /** ESEMPIO DI LINEE CONTROLLATE PER CHECK SUL RE' (RE = K)
     *
     *  | CONTROLLO PER TORRE-ALFIERE-REGINA-RE-PEDINA |
     *
     *       A  B  C  D  E  F  G  H
     *
     *  1    0  -  -  -  0  -  -  -
     *  2    -  0  -  -  0  -  -  0
     *  3    -  -  0  -  0  -  0  -
     *  4    -  -  -  0  0  0  -  -
     *  5    0  0  0  0  K  0  0  0
     *  6    -  -  -  0  0  0  -  -
     *  7    -  -  0  -  0  -  0  -
     *  8    -  0  -  -  0  -  -  0
     *
     *  | CONTROLLO PER CAVALLO |
     *
     *       A  B  C  D  E  F  G  H
     *
     *  1    -  -  -  -  -  -  -  -
     *  2    -  -  -  -  -  -  -  -
     *  3    -  -  -  0  -  0  -  -
     *  4    -  -  0  -  -  -  0  -
     *  5    -  -  -  -  K  -  -  -
     *  6    -  -  0  -  -  -  0  -
     *  7    -  -  -  0  -  0  -  -
     *  8    -  -  -  -  -  -  -  -
     *
    */

    int col = 0;
    int row = 0;

    // Controllo diagonale superiore sinistra
    col = king_col - 1;
    for (int row = king_row - 1; row >= 0 && col >= 0; row--) {

        if (virtual_board.grid[row][col].color == color) {
            break;
        }
        if (virtual_board.grid[row][col].color != color && virtual_board.grid[row][col].color != red) {
            if (valid_attack(king_row, king_col, virtual_board.grid[row][col])) {
                return true;
            }
        }
        col--;
    }

    // Controllo diagonale superiore destra
    col = king_col + 1;
    for (int row = king_row - 1; row >= 0 && col < 8; row--) {

        if (virtual_board.grid[row][col].color == color) {
            break;
        }
        if (virtual_board.grid[row][col].color != color && virtual_board.grid[row][col].color != red) {
            if (valid_attack(king_row, king_col, virtual_board.grid[row][col])) {
                return true;
            }
        }
        col++;
    }

    // Controllo diagonale inferiore sinistra
    col = king_col - 1;
    for (int row = king_row + 1; row < 8 && col >= 0; row++) {

        if (virtual_board.grid[row][col].color == color) {
            break;
        }
        if (virtual_board.grid[row][col].color != color && virtual_board.grid[row][col].color != red) {
            if (valid_attack(king_row, king_col, virtual_board.grid[row][col])) {
                return true;
            }
        }
        col--;
    }

    // Controllo diagonale inferiore destra
    col = king_col + 1;
    for (int row = king_row + 1; row < 8 && col < 8; row++) {

        if (virtual_board.grid[row][col].color == color) {
            break;
        }
        if (virtual_board.grid[row][col].color != color && virtual_board.grid[row][col].color != red) {
            if (valid_attack(king_row, king_col, virtual_board.grid[row][col])) {
                return true;
            }
        }
        col++;
    }

    // Controllo colonna superiore.
    for (int row = king_row + 1; row < 8; row++) {
        if (virtual_board.grid[row][king_col].color == color) {
            break;
        }
        if (virtual_board.grid[row][king_col].color != color && virtual_board.grid[row][king_col].color != red) {
            if (valid_attack(king_row, king_col, virtual_board.grid[row][king_col])) {
                return true;
            }
        }
    }

    // Controllo colonna inferiore.
    for (int row = king_row - 1; row >= 0; row--) {
        if (virtual_board.grid[row][king_col].color == color) {
            break;
        }
        if (virtual_board.grid[row][king_col].color != color && virtual_board.grid[row][king_col].color != red) {
            if (valid_attack(king_row, king_col, virtual_board.grid[row][king_col])) {
                return true;
            }
        }
    }


    // Controllo riga destra.
    for (int col = king_col + 1; col < 8; col++) {
        if (virtual_board.grid[king_row][col].color == color) {
            break;
        }
        if (virtual_board.grid[king_row][col].color != color && virtual_board.grid[king_row][col].color != red) {
            if (valid_attack(king_row, king_col, virtual_board.grid[king_row][col])) {
                return true;
            }
        }
    }

    // Controllo riga sinistra.
    for (int col = king_col - 1; col >= 0; col--) {
        if (virtual_board.grid[king_row][col].color == color) {
            break;
        }
        if (virtual_board.grid[king_row][col].color != color && virtual_board.grid[king_row][col].color != red) {
            if (valid_attack(king_row, king_col, virtual_board.grid[king_row][col])) {
                return true;
            }
        }
    }

    // Controllo per il cavallo
    if (king_row > 0 && king_col > 0) {
        if (king_row > 1) {
            if (virtual_board.grid[king_row - 2][king_col - 1].color != color && virtual_board.grid[king_row - 2][king_col - 1].color != red) {
                if (valid_attack(king_row, king_col, virtual_board.grid[king_row - 2][king_col - 1])) {
                    return true;
                }
            }
        }
        if (king_col > 1) {
            if (virtual_board.grid[king_row - 1][king_col - 2].color != color && virtual_board.grid[king_row - 1][king_col - 2].color != red) {
                if (valid_attack(king_row, king_col, virtual_board.grid[king_row - 1][king_col - 2])) {
                    return true;
                }
            }
        }
    }
    if (king_row < 7 && king_col < 7) {
        if (king_row < 6) {
            if (virtual_board.grid[king_row + 2][king_col + 1].color != color && virtual_board.grid[king_row + 2][king_col + 1].color != red) {
                if (valid_attack(king_row, king_col, virtual_board.grid[king_row + 2][king_col + 1])) {
                    return true;
                }
            }
        }
        if (king_col < 6) {
            if (virtual_board.grid[king_row + 1][king_col + 2].color != color && virtual_board.grid[king_row + 1][king_col + 2].color != red) {
                if (valid_attack(king_row, king_col, virtual_board.grid[king_row - 1][king_col - 2])) {
                    return true;
                }
            }
        }
    }
    return false;
}

bool Board::king_under_check(player_color color)
{
    int king_row = 0;
    int king_col = 0;
    for (king_row = 0; king_row < 8; king_row++) {
        for (king_col = 0; king_col < 8; king_col++) {
            if (grid[king_row][king_col].name == " king " && grid[king_row][king_col].color == color) {
                goto endFor;
            }
        }
    }
endFor:

    /** ESEMPIO DI LINEE CONTROLLATE PER CHECK SUL RE' (RE = K)
     *
     *  | CONTROLLO PER TORRE-ALFIERE-REGINA-RE-PEDINA |
     *
     *       A  B  C  D  E  F  G  H
     *
     *  1    0  -  -  -  0  -  -  -
     *  2    -  0  -  -  0  -  -  0
     *  3    -  -  0  -  0  -  0  -
     *  4    -  -  -  0  0  0  -  -
     *  5    0  0  0  0  K  0  0  0
     *  6    -  -  -  0  0  0  -  -
     *  7    -  -  0  -  0  -  0  -
     *  8    -  0  -  -  0  -  -  0
     *
     *  | CONTROLLO PER CAVALLO |
     *
     *       A  B  C  D  E  F  G  H
     *
     *  1    -  -  -  -  -  -  -  -
     *  2    -  -  -  -  -  -  -  -
     *  3    -  -  -  0  -  0  -  -
     *  4    -  -  0  -  -  -  0  -
     *  5    -  -  -  -  K  -  -  -
     *  6    -  -  0  -  -  -  0  -
     *  7    -  -  -  0  -  0  -  -
     *  8    -  -  -  -  -  -  -  -
     *
    */

    int col = 0;
    int row = 0;

    // Controllo diagonale superiore sinistra
    col = king_col - 1;
    for (int row = king_row - 1; row >= 0 && col >= 0; row--) {

        if (grid[row][col].color == color) {
            break;
        }
        if (grid[row][col].color != color && grid[row][col].color != red) {
            if (valid_attack(king_row, king_col, grid[row][col])) {
                return true;
            }
        }
        col--;
    }

    // Controllo diagonale superiore destra
    col = king_col + 1;
    for (int row = king_row - 1; row >= 0 && col < 8; row--) {

        if (grid[row][col].color == color) {
            break;
        }
        if (grid[row][col].color != color && grid[row][col].color != red) {
            if (valid_attack(king_row, king_col, grid[row][col])) {
                return true;
            }
        }
        col++;
    }

    // Controllo diagonale inferiore sinistra
    col = king_col - 1;
    for (int row = king_row + 1; row < 8 && col >= 0; row++) {

        if (grid[row][col].color == color) {
            break;
        }
        if (grid[row][col].color != color && grid[row][col].color != red) {
            if (valid_attack(king_row, king_col, grid[row][col])) {
                return true;
            }
        }
        col--;
    }

    // Controllo diagonale inferiore destra
    col = king_col + 1;
    for (int row = king_row + 1; row < 8 && col < 8; row++) {

        if (grid[row][col].color == color) {
            break;
        }
        if (grid[row][col].color != color && grid[row][col].color != red) {
            if (valid_attack(king_row, king_col, grid[row][col])) {
                return true;
            }
        }
        col++;
    }

    // Controllo colonna superiore.
    for (int row = king_row + 1; row < 8; row++) {
        if (grid[row][king_col].color == color) {
            break;
        }
        if (grid[row][king_col].color != color && grid[row][king_col].color != red) {
            if (valid_attack(king_row, king_col, grid[row][king_col])) {
                return true;
            }
        }
    }

    // Controllo colonna inferiore.
    for (int row = king_row - 1; row >= 0; row--) {
        if (grid[row][king_col].color == color) {
            break;
        }
        if (grid[row][king_col].color != color && grid[row][king_col].color != red) {
            if (valid_attack(king_row, king_col, grid[row][king_col])) {
                return true;
            }
        }
    }

    // Controllo riga destra.
    for (int col = king_col + 1; col < 8; col++) {
        if (grid[king_row][col].color == color) {
            break;
        }
        if (grid[king_row][col].color != color && grid[king_row][col].color != red) {
            if (valid_attack(king_row, king_col, grid[king_row][col])) {
                return true;
            }
        }
    }

    // Controllo riga sinistra.
    for (int col = king_col - 1; col >= 0; col--) {
        if (grid[king_row][col].color == color) {
            break;
        }
        if (grid[king_row][col].color != color && grid[king_row][col].color != red) {
            if (valid_attack(king_row, king_col, grid[king_row][col])) {
                return true;
            }
        }
    }

    // Controllo per il cavallo [DA RIFARE]
    if (king_row > 0 && king_col > 0) {
        if (king_row > 1) {
            if (grid[king_row - 2][king_col - 1].color != color && grid[king_row - 2][king_col - 1].color != red) {
                if (valid_attack(king_row, king_col, grid[king_row - 2][king_col - 1])) {
                    return true;
                }
            }
        }
        if (king_col > 1) {
            if (grid[king_row - 1][king_col - 2].color != color && grid[king_row - 1][king_col - 2].color != red) {
                if (valid_attack(king_row, king_col, grid[king_row - 1][king_col - 2])) {
                    return true;
                }
            }
        }
    }
    if (king_row < 7 && king_col < 7) {
        if (king_row < 6) {
            if (grid[king_row + 2][king_col + 1].color != color && grid[king_row + 2][king_col + 1].color != red) {
                if (valid_attack(king_row, king_col, grid[king_row + 2][king_col + 1])) {
                    return true;
                }
            }
        }
        if (king_col < 6) {
            if (grid[king_row + 1][king_col + 2].color != color && grid[king_row + 1][king_col + 2].color != red) {
                if (valid_attack(king_row, king_col, grid[king_row - 1][king_col - 2])) {
                    return true;
                }
            }
        }
    }
    return false;
}

bool Board::checkmate(player_color color)
{
    // METODO FORZA BRUTA -> per ogni pezzo controllo ogni possibile mossa.
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            if (grid[row][col].color == color) {
                for (int second_row = 0; second_row < 8; second_row++) {
                    for (int second_col = 0; second_col < 8; second_col++) {
                        if (virtual_turn(color, second_row, second_col, row, col)) {
                            if (!virtual_king_under_check(color)) {
                                return false;
                            }
                        }
                    }
                }
            }
        }
    }

    return true;
}

/* DA CAPIRE COME IMPLEMENTARE
 */
int Board::controlled_input_integer()
{
    return 0;
}

/* DA CAPIRE COME IMPLEMENTARE
 */
int Board::controlled_input_integer_2()
{
    return 0;
}

/* DA CAPIRE COME IMPLEMENTARE
 */
int Board::controlled_input_char()
{
    return 0;
}

/**
 ********************************** LOOP DI CONTROLLO PER I TURNI *******************************************************************************
 *
 * (1) Controllo se il mio re è sotto scacco [NOPE]
 *
 * (2) <<INSERISCO LE COORDINATE DEL PEZZO DA SPOSTARE>> [OK]
 *
 * (3) Controllo se ho selezionato un pezzo del colore corretto. [OK]
 *
 * (4) <<INSERISCO LE NUOVE COORDINATE DEL PEZZO SELEZIONATO>> [OK]
 *
 * (5) Controllo se la mossa che ho inserito è valida per quel pezzo. (=> non attraverso illegalmente altri pezzi ed e' coerente con moveset) [OK]
 *
 * (6) Se il re risulta ancora sotto scacco, RIPETO LOOP DAL PUNTO 1. [OK]
 *
 * (7) Controllo se sto facendo una promozione di pedina. [OK]
 *     <<SELEZIONO IL TIPO DI PEZZO A CUI PROMUOVERE LA PEDINA>> [OK]
 *
 ************************* SE IL RE NON E' SOTTO SCACCO E LA MOSSA E' VALIDA SI ESCE DAL LOOP *************************************************
*/

int Board::white_turn()
{
    do {
        if (king_under_check(white)) {
            if (checkmate(white)) {
                cout << " SCACCO MATT0! HA VINTO IL NERO!" << endl;
                exit(0);
            }
            else {
                cout << " IL RE E' SOTTO SCACCO! " << endl;
            }
        }
        do {
            do {
                cout << " <BIANCO> Inserisci il pezzo da spostare. \n";
                cout << " <BIANCO> Inserisci la RIGA ( NUMERO 1 -> 8 ) ( -1 per forfait ) : ";
                piece_row = controlled_input_integer();
                if (piece_row == INVALID) {
                    cout << " HA VINTO IL NERO PER FORFAIT! ";
                    return 0;
                }
                cout << " <BIANCO> Inserisci la COLONNA ( CARATTERE A -> H ) : ";
                piece_col = controlled_input_char();
            } while (grid[piece_row][piece_col].color != white);

            //print_board_with_moveset(board.grid[piece_row][piece_col]);

            do {
                cout << " <BIANCO> Inserisci la nuova posizione del pezzo da spostare. \n";
                cout << " <BIANCO> Inserisci la RIGA ( NUMERO 1 -> 8 ) ( -2 per selezionare nuovo pezzo da capo ): ";
                dest_row = controlled_input_integer_2();
                if (dest_row == -2) {
                    break;
                }
                cout << " <BIANCO> Inserisci la COLONNA ( CARATTERE A -> H ) : ";
                dest_col = controlled_input_char();
            } while (grid[dest_row][dest_col].color == white || grid[dest_row][dest_col].name == " king " || !virtual_turn(white, dest_row, dest_col, piece_row, piece_col));

        } while (dest_row == -2);

    } while (virtual_king_under_check(white));

    make_move(dest_row, dest_col, grid[piece_row][piece_col]);
    if (grid[dest_row][dest_col].name == " pawn ") {
        if (piece_row == 6) {
            grid[dest_row][dest_col].moveset = special_moveset(1);
        }
        if (dest_row == 0) {
            pawn_promotion();
        }
    }
    
    //print_board(board.grid);
    turn = 1;
    return 1;
}

int Board::black_turn()
{
    do {
        if (king_under_check(black)) {
            if (checkmate(black)) {
                cout << " SCACCO MATT0! HA VINTO IL BIANCO!" << endl;
                exit(0);
            }
            else {
                cout << " IL RE E' SOTTO SCACCO! " << endl;
            }
        }
        do {
            do {
                cout << " <NERO> Inserisci il pezzo da spostare. \n";
                cout << " <NERO> Inserisci la RIGA ( NUMERO 0 -> 7 ) ( -1 per forfait ) : ";
                piece_row = controlled_input_integer();
                if (piece_row == INVALID) {
                    cout << " HA VINTO IL BIANCO PER FORFAIT! ";
                    return 0;
                }
                cout << " <NERO> Inserisci la COLONNA ( CARATTERE A -> H ) : ";
                piece_col = controlled_input_char();
            } while (grid[piece_row][piece_col].color != black);

            //print_board_with_moveset(board.grid[piece_row][piece_col]);

            do {
                cout << " <NERO> Inserisci la nuova posizione del pezzo da spostare. \n";
                cout << " <NERO> Inserisci la RIGA ( NUMERO 0 -> 7 ) ( -2 per selezionare nuovo pezzo da capo ): ";
                dest_row = controlled_input_integer_2();
                if (dest_row == -2) {
                    break;
                }
                cout << " <NERO> Inserisci la COLONNA ( CARATTERE A -> H ) : ";
                dest_col = controlled_input_char();
            } while (grid[dest_row][dest_col].color == black || grid[dest_row][dest_col].name == " king " || !virtual_turn(black, dest_row, dest_col, piece_row, piece_col));

        } while (dest_row == -2);

    } while (virtual_king_under_check(black));

    make_move(dest_row, dest_col, grid[piece_row][piece_col]);
    if (grid[dest_row][dest_col].name == " pawn ") {
        if (piece_row == 1) {

            grid[dest_row][dest_col].moveset = special_moveset(0);
        }
        if (dest_row == 7) {
            pawn_promotion();
        }
    }
    
    //print_board(board.grid);
    turn = 0;
    return 1;
}