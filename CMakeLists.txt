cmake_minimum_required(VERSION 3.29)
project(PigDice5)

set(CMAKE_CXX_STANDARD 20)

add_executable(PigDice5 main.cpp
        Game.cpp
        Game.h
        Die.h
        Player.h
        Turn.cpp
        Turn.h
        TwoPlayerGame.cpp
        TwoPlayerGame.h)
