#include "Warrior.h"

Warrior::Warrior(const string& n,int level)
    : Character(n, level, warriorHp(level), warriorHp(level),warriorResource(level),warriorResource(level), warriorAtk(level), warriorDef(level)) {};

void Warrior::setHpStat() { maxHp = warriorHp(level); hp = warriorHp(level); }

void Warrior::setAtkStat() {atk = warriorAtk(level); }

void Warrior::setDefStat() {def = warriorDef(level); }