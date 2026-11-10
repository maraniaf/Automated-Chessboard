#include <iostream>
#include "pieces/piece.h"

// This prints Automated Chessboard on the screen.
int main() { 
    std::cout << "Automated Chessboard" << std::endl;
    Piece blackPiece(Color::Black);

if (blackPiece.getColor() == Color::Black) {
    std::cout << "The piece is black." << std::endl;
}
    return 0;
}