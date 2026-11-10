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

D2: Understanding C++ and building

# Today I changed Piece to use enum class Color so I can write Color::White or Color::Black instead of true or false. I added a private field called pieceColor to store each piece’s color. In piece.cpp, I wrote the constructor that sets the color and getColor() const, which reads it. In main.cpp, I created a black piece and added an if statement to check its color.

1. main.cpp is where the program starts. std::cout prints a message, and return 0; reports that the program finished successfully. I practiced bool and if/else here.

2. piece.h defines Color and the Piece class. The header guard (#ifndef, #define, #endif) keeps the header from being processed twice while compiling a source file.

3. enum class Color { White, Black }; gives us the names Color::White and Color::Black. I switched from a bool so I can read the color directly.

4. Color pieceColor; is the private field where each piece stores its own color. The public constructor sets it, and the public getColor() const function reads it without changing the piece. Both functions are implemented in piece.cpp.
