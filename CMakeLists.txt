cmake_minimum_required(VERSION 3.14)
project(checkers)

set(CMAKE_CXX_STANDARD 14)

add_executable(checkers src/main.cpp src/Board.cpp src/Board.h src/Field.h src/Pawn.cpp src/Pawn.h src/PlayerPawn.cpp src/PlayerPawn.h src/ProgramPawn.cpp src/ProgramPawn.h src/Move.h src/MoveDTO.h)