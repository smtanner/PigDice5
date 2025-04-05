#ifndef TWOPLAYERGAME_H
#define TWOPLAYERGAME_H

#include "Game.h"
#include "Player.h"
#include "Turn.h"
#include <string>

class TwoPlayerGame : public Game {
private:
    std::string player1Name;
    std::string player2Name;
    Player player1;
    Player player2;
    int currentPlayerTurn;  // 1 for player 1, 2 for player 2
    bool gameEnd;          // To check if the game has ended

public:
    TwoPlayerGame(const std::string& p1, const std::string& p2)
        : player1Name(p1), player2Name(p2), currentPlayerTurn(1), gameEnd(false) {}

    void play() override;
    void switchTurn();
};

#endif
