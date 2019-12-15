#include <string>
#include <utility>

//
// Created by mpars on 08.12.2019.
//

#ifndef CHECKERS_FIELD_H
#define CHECKERS_FIELD_H

struct Field {
    Field(int x, int y) : x(x), y(y) {}

    int x;
    int y;
};

#endif // CHECKERS_FIELD_H