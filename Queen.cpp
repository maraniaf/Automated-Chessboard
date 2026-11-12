#include "Queen.h"
#include <cstdlib>

Queen::Queen(char color, int row, int col) {
    this->color = color;
    this->row = row;
    this->col = col;
    this->hasMoved = false;
}

bool Queen::isValidMove(int newRow, int newCol) {

    int rowDiff = abs(newRow - row);
    int colDiff = abs(newCol - col);

    // horizontal, vertical, or diagonal
    return (rowDiff == 0 || colDiff == 0 ||
            rowDiff == colDiff) &&
            (rowDiff + colDiff > 0);
}
