#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Character/Character.h"
#include "character_classes/Warrior.h"
#include "character_classes/Mage.h"
#include "character_classes/Archer.h"
#include "character_classes/Healer.h"
#include "character_classes/Enemy.h"
#include "character_classes/Boss.h"
#include "combat/Combat.h"

class Game {
private:
    Warrior* player;
    vector<Character*> arena;
    int currentIndex;
public:
    Game(const string& n);
    ~Game();

    void gameLoop();
};

#endif