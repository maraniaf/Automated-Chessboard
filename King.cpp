#include "King.h"

King::King(char color, int row, int col) {
    this->color = color;
    this->row = row;
    this->col = col;
    this->hasMoved = false;
}

bool King::isValidMove(int newRow, int newCol) {
    int rowDiff = abs(newRow - row);
    int colDiff = abs(newCol - col);

    return rowDiff <= 1 &&
           colDiff <= 1 &&
           (rowDiff + colDiff > 0);
}
