#include "Boss.h"

Boss::Boss(const string n,int level)
    : Character(n, level, bossHp(level), bossHp(level),bossResource(level),bossResource(level),bossAtk(level), bossDef(level)) { expDrop = expDropBossFormula(level); }

void Boss::setHpStat() { maxHp = bossHp(level); hp = bossHp(level); }

void Boss::setAtkStat() { atk = bossAtk(level); }

void Boss::setDefStat() { def = bossDef(level); }