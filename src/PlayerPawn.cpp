//
// Created by mpars on 13.12.2019.
//

#include <algorithm>
#include "PlayerPawn.h"
#include "Board.h"

PlayerPawn::PlayerPawn(int x, int y) : Pawn(x, y) {}

void PlayerPawn::makeMove(std::vector<Move> moves) {
    for (auto it = moves.begin(); it != moves.end(); ++it) {
        if (!this->isValidMove(it->to.x, it->to.y, it->beaten_id)) {
            throw;
        }

    }

}

void PlayerPawn::updateBoard() {
    Board::getInstance().board_array;
}

std::vector<MoveDTO> PlayerPawn::checkAvailableMoves(int row, int col) {
    for (int x = this->x - 1; x < this->x + 1; ++x) {
        for (int y = this->y - 1; y < this->y + 1; ++y) {
        }
    }
}

bool PlayerPawn::isValidMove(int row, int col, std::string beaten) {
    if (col > 7 || col < 0 || row > 7 || row < 0)
        return false;
    Board &board = Board::getInstance();
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {

        }
    }
    return board.board_array[row][col] == 0;

}
