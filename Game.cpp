#include "Game.h"
#include <iostream>

void Game::printRules() const {
    std::cout << "Let's Play PIG Dice!\n";
    std::cout << "* See which player will reach 50 points in the fewest turns.\n";
    std::cout << "* Turn ends when you hold or roll a 1.\n";
    std::cout << "* If you roll a 1, you lose all points for the turn.\n";
    std::cout << "* If you hold, you save all points for the turn.\n\n";
}
