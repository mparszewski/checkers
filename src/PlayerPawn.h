//
// Created by mpars on 13.12.2019.
//

#include "Pawn.h"

#ifndef CHECKERS_PLAYERPAWN_H
#define CHECKERS_PLAYERPAWN_H


class PlayerPawn : public Pawn {

public:
    PlayerPawn(int x, int y);

private:
    void makeMove(std::vector<Move> moves) override;

    void updateBoard() override;

    std::vector<MoveDTO> checkAvailableMoves(int row, int col) override;

    bool isValidMove(int row, int col, std::string beaten) override;
};


#endif //CHECKERS_PLAYERPAWN_H
