//
// Created by mpars on 08.12.2019.
//

#ifndef CHECKERS_BOARD_H
#define CHECKERS_BOARD_H


#include <vector>
#include "Field.h"
#include "Pawn.h"
#include "PlayerPawn.h"
#include "ProgramPawn.h"

class Board {
public:
    static Board &getInstance() {
        static Board board;
        return board;
    }

    std::vector<Pawn *> getPawns();

    int board_array[8][8]{};
private:

    Board();

    Board(const Board &) = delete;

    Board &operator=(const Board &) = delete;

    const int size = 8;
    std::vector<Pawn *> pawns;
};


#endif //CHECKERS_BOARD_H
