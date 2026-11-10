D1: File Set Up and Understanding C++

# Today I set up all the files I need for now and what they each will do. I compiled and ran my first C++ program. Learned what main(), std::cout, and return 0; do. Practiced bool and if/else. Started piece.h and learned how header guards work. Added the private color variable isWhite. Declared Piece(bool white);, which is a constructor that will set the color. We haven’t implemented it yet.

software/
  main.cpp
  board.h
  board.cpp
  game.h
  game.cpp
  pieces/
    piece.h
    piece.cpp
    pawn.h
    pawn.cpp
    rook.h
    rook.cpp
    bishop.h
    bishop.cpp

1. Piece classes: describe how each piece moves.

2. Board: stores pieces and checks whether paths are blocked.

3. Game: manages turns and rejects moves that leave your king in check.

Gantry controller executes approved moves.

- .h files declare classes: their variables and available functions.
- .cpp files contain code: including the work those functions perform.
- main() is where our computer program starts. Its file is usually named main.cpp, but that filename isn’t required.
- Setup steps can go inside main(), or in a function that main() calls.
- Arduino uses setup() once and loop() repeatedly. We’ll handle that when we connect the hardware.
- We’ll have Board, Game, and piece classes such as Rook, Bishop, and Pawn. Each individual piece is an object of its class.

