#ifndef PIECE_H
#define PIECE_H

enum class Color { White, Black };

class Piece {
private:
    Color pieceColor;

public:
    Piece(Color chosenColor);
    Color getColor() const;
};

#endif