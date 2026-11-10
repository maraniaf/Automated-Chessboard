# In C++, you typically split a class into two files:

1. .h header: declares the class, its data and available functions.

    - A header file (.h) declares things other files can use, such as our Piece class.
    - A header guard prevents those declarations from being processed twice in the same compilation unit:
 Example:  

#ifndef PIECE_H [if ths marker hasnt been read, read what follows]
#define PIECE_H [creates the marker]

class Piece { [defines the class]
};

#endif [ ends the conditional]


2. .cpp source: implements those functions.

    - For example, rook.h describes what a rook can do, and rook.cpp contains the code that checks its movement.

#  CODE FOR MAIN: 
- #include tells C++ to bring in declarations from a header.

- <iostream> is a standard C++ header that lets us use tools for input and output, such as printing text. kinda like imports in java 


#  This prints hello word 
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

#  You compile whenever you want your code changes included in the program.
- Changed the code? Compile again, then run.
- if running the same unchanged program, just use ./chessboard.

#  printing a bool shows 1 for true and 0 for false