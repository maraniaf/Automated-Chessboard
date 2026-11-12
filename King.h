#ifndef KING_H
#define KING_H

class King {
private:
    char color;
    int row;
    int col;
    bool hasMoved;

public:
    King(char color, int row, int col);

    bool isValidMove(int newRow, int newCol);

    bool canCastle();

    void move(int newRow, int newCol);
};

#endif
