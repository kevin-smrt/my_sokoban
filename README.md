## My_Sokoban
* Language: C
* Compilation: via Makefile

## Authorized functions
Every functions from the ncurses library are authorized. In addition, the following system calls and functions are allowed:

* malloc, free, exit
* (f)open, (f)close, (f)read, (f)write
* getline, ioctl, usleep, sigaction, signal
* wait3, wait4, signal, kill, getpid, strerror, perror, strsignal

## Subject
> Sokoban (warehouse keeper in Japanese) is a type of transport puzzle, in which the player pushes boxes or crates around in a warehouse, trying to get them to storage locations. The puzzle is usually implemented as a video game. Sokoban was created in 1981 by Hiroyuki Imabayashi, and published in 1982 by Thinking Rabbit, a software house based in Takarazuka, Japan.
>
> The game is played on a board of squares, where each square is a floor or a wall. Some floor squares contain boxes, and some floor squares are marked as storage locations. The player is confined to the board, and may move horizontally or vertically onto empty squares (never through walls or boxes). The player can also move into a box, which pushes it into the square beyond. Boxes may not be pushed into other boxes or walls, and they cannot be pulled. The puzzle is solved when all boxes are at storage locations.

> Wikipedia
