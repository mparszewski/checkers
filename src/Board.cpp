//
// Created by mpars on 08.12.2019.
//

#include "Board.h"

/**
 * W konstruktorze inicjujemy stan początkowy planszy.
 */
Board::Board() {
    for (int i = 0; i < this->size; ++i) {
        for (int j = 0; j < this->size; ++j) {
            if (i < 3) {
                if ((i + 1) % 2 == (j + 1) % 2) {
                    this->pawns.emplace_back(new PlayerPawn(i, j));
                    this->board_array[i][j] = 1;
                }
            } else if (i > 4) {
                if ((i + 1) % 2 == (j + 1) % 2) {
                    this->pawns.emplace_back(new ProgramPawn(i, j));
                    this->board_array[i][j] = 2;
                }
            }
        }
    }
}

std::vector<Pawn *> Board::getPawns() {
    return this->pawns;
}
