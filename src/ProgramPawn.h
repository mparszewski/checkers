//
// Created by mpars on 13.12.2019.
//

#include "Pawn.h"

#ifndef CHECKERS_PROGRAMPAWN_H
#define CHECKERS_PROGRAMPAWN_H


class ProgramPawn : public Pawn {
public:
    ProgramPawn(int x, int y);

private:
    void makeMove(std::vector<Move> moves) override;

    bool isValidMove(int row, int col, std::vector<std::string> beaten) override;

    void updateBoard() override;

    std::vector<MoveDTO> checkAvailableMoves(int row, int col) override;

};


#endif //CHECKERS_PROGRAMPAWN_H
