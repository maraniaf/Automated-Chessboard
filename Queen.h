#ifndef QUEEN_H
#define QUEEN_H

class Queen {
private:
    char color;
    int row;
    int col;
    bool hasMoved;

public:
    Queen(char color, int row, int col);

    bool isValidMove(int newRow, int newCol);

    void move(int newRow, int newCol);
};

#endif
