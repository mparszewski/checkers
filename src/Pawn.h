//
// Created by mpars on 08.12.2019.
//

#ifndef CHECKERS_PAWN_H
#define CHECKERS_PAWN_H


#include <string>
#include <vector>
#include "Move.h"
#include "MoveDTO.h"

class Pawn {
public:
    Pawn(int x, int y);

    std::string id;
    int x;
    int y;
    bool isKing = false;

private:

    virtual void makeMove(std::vector<Move> moves) = 0;

    virtual void updateBoard() = 0;

    virtual std::vector<MoveDTO> checkAvailableMoves(int row, int col) = 0;

    virtual bool isValidMove(int row, int col, std::string beaten) = 0;
};


#endif //CHECKERS_PAWN_H
