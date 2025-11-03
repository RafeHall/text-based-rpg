#ifndef BOSS_H
#define BOSS_H

#include "Character.h"

class Boss : public Character {
public:
    Boss(const string n,int lvl);

    void setHpStat() override;
    void setAtkStat() override;
    void setDefStat() override;
};

#endif