#include "piece.h"

Piece::Piece(Color chosenColor) : pieceColor(chosenColor) {
}

Color Piece::getColor() const {
    return pieceColor;
}