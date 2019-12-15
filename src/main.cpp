#include <iostream>
#include "Board.h"

void print_white(Board &b) {
    for (int i = 0; i < b.getPawns().size(); ++i) {
        std::cout << "x: " << b.getPawns().at(i)->x << std::endl;
        std::cout << "y: " << b.getPawns().at(i)->y << std::endl;
        std::cout << "pawn id: " << b.getPawns().at(i)->id << std::endl;
        std::cout << "is King: " << b.getPawns().at(i)->isKing << std::endl;
    }
}

int main() {
    print_white(Board::getInstance());
    return 0;
}
