#ifndef DIE_H
#define DIE_H

#include <cstdlib>
#include <ctime>

class Die {
private:
    int sides;
    int value;

public:
    Die(int s = 6) : sides(s) { srand(time(0)); }
    int roll() {
        value = rand() % sides + 1;
        return value;
    }
};

#endif
