#include "TwoPlayerGame.h"
#include <iostream>

using namespace std;

void TwoPlayerGame::play() {
    printRules();  // Calls printRules from Game.cpp
    int turnCount = 1;  // Starting turn count
    gameEnd = false;    // Initialize gameEnd to false

    while (!gameEnd) {
        Turn turn;
        if (currentPlayerTurn == 1) {
            cout << player1Name << " (Score: " << player1.getScore() << ") - TURN " << turnCount << endl;
            turn.takeTurn(player1);
            if (player1.getScore() >= 50) {
                gameEnd = true;
                cout << "\nCongratulations " << player1Name << " you're the winner!" << endl;
                cout << "You had a final score of " << player1.getScore() << " points after " << turnCount << " turns!" << endl;
                cout << "\nTHANKS FOR PLAYING!" << endl;
            }
        } else {
            cout << player2Name << " (Score: " << player2.getScore() << ") - TURN " << turnCount << endl;
            turn.takeTurn(player2);
            if (player2.getScore() >= 50) {
                gameEnd = true;
                cout << "\nCongratulations " << player2Name << " you're the winner!" << endl;
                cout << "You had a final score of " << player2.getScore() << " points after " << turnCount << " turns!" << endl;
                cout << "\nTHANKS FOR PLAYING!" << endl;
            }
        }

        switchTurn();
        turnCount++;  // Increment turn count after both players have played their turn
    }
}

void TwoPlayerGame::switchTurn() {
    currentPlayerTurn = (currentPlayerTurn == 1) ? 2 : 1;
}
