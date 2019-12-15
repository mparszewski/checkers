//
// Created by mpars on 14.12.2019.
//

#ifndef CHECKERS_MOVE_H
#define CHECKERS_MOVE_H


#include <utility>
#include <vector>
#include "Field.h"

struct Move {
    Move(Field to, std::string beaten_id) : to(to), beaten_id(std::move(beaten_id)) {};
    Field to;
    std::string beaten_id;
};


#endif //CHECKERS_MOVE_H
