#include "Turn.h"

void Turn::takeTurn(Player& player) {
    turnEnd = false;
    char choice;

    while (!turnEnd) {
        std::cout << "roll or hold? (r/h): ";
        std::cin >> choice;

        if (choice == 'r') {
            rollDie();
            if (turnEnd) {
                std::cout << "Turn over. No score." << std::endl;
            }
        } else if (choice == 'h') {
            hold(player);
        } else {
            std::cout << "Invalid choice! Try again." << std::endl;
        }
    }
}

void Turn::rollDie() {
    int roll = die.roll();
    std::cout << "Die: " << roll << std::endl;
    if (roll == 1) {
        turnScore = 0;
        turnEnd = true;
    } else {
        turnScore += roll;
    }
}

void Turn::hold(Player& player) {
    player.addScore(turnScore);
    std::cout << "Score for turn: " << turnScore << std::endl;
    std::cout << "Total score: " << player.getScore() << std::endl;
    turnScore = 0;
    turnEnd = true;
}
