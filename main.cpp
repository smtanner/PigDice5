#include "TwoPlayerGame.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string player1Name, player2Name;

    cout << "Enter player1's name: ";
    cin >> player1Name;
    cout << "Enter player2's name: ";
    cin >> player2Name;

    TwoPlayerGame game(player1Name, player2Name);
    game.play();

    return 0;
}
