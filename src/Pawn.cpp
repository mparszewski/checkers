//
// Created by mpars on 08.12.2019.
//

#include "Pawn.h"
#include <string>
#include <sstream>

Pawn::Pawn(int x, int y) : x(x), y(y) {
    this->x = x;
    this->y = y;
    std::ostringstream xs;
    std::ostringstream ys;
    xs << x;
    ys << y;
    this->id = xs.str() + ys.str();
}
