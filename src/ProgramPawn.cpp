//
// Created by mpars on 13.12.2019.
//

#include "ProgramPawn.h"

//TODO: Ruch tego pionka powinien być wykonywany przy pomocy algorytmu MIN-MAX
ProgramPawn::ProgramPawn(int x, int y) : Pawn(x, y) {}


void ProgramPawn::updateBoard() {

}

std::vector<MoveDTO> ProgramPawn::checkAvailableMoves(int row, int col) {

}

void ProgramPawn::makeMove(int row, int column, std::vector<std::string> beaten) {

}

bool ProgramPawn::isValidMove(int row, int col, std::vector<std::string> beaten) {
    return false;
}
