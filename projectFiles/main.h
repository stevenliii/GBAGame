#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs
struct Player {
    int row;
    int col;
    char lives;
};
struct Obstacle {
    int row;
    int col;
    int xdirection;
    int ydirection;
};
struct Goal {
    int row;
    int col;
    int width;
    int height;
};
/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#endif
