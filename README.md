# brainfuck-interpreter
A C++ interpreter for my take on the esoteric programming language Brainfuck.
  # Syntax
    + : Increments the value at the current cell by one.
    - : Decrements the value at the current cell by one.
    > : Moves the data pointer to the next cell (cell on the right).
    < : Moves the data pointer to the previous cell (cell on the left).
    . : Prints the ASCII value at the current cell (i.e. 65 = 'A').
    , : Reads a single input character into the current cell.
    [ : If the value at the current cell is zero, skips to the corresponding ] .
        Otherwise, move to the next instruction.
    ] : If the value at the current cell is zero, move to the next instruction.
        Otherwise, move backwards in the instructions to the corresponding [ .
    @ : takes number input n, and prints the n first cells.
    ; : takes integer input.
    : : prints a integer.
    % : prints a "\n";
      
    Thanks to learnXinY for the description of base brainfuck that I added my features onto.
