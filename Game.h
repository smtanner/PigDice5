#ifndef GAME_H
#define GAME_H

class Game {
public:
    virtual void play() = 0;  // Pure virtual function
    void printRules() const;   // Declaration of printRules function
    virtual ~Game() {}  // Virtual destructor to ensure proper cleanup
};

#endif
