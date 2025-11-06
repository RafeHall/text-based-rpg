#include "skills/Skill.h"
#include "Formulas.hpp"
#include "Character/Character.h"
#include <iostream>

Skill::Skill(bool magic, float p, float c)
    : isMagic(magic), points(p), cost(c) {}

Skill::~Skill() {}

bool Skill::canUse(Character& source) {
    if (source.getResource() < cost) { return false; }
    return true;
}

bool Skill::getIsMagic() const { return isMagic; }
float Skill::getPoints() const { return points; }
float Skill::getCost() const { return cost; }

void Skill::cantUse(Character& source) const {
    cout << (source.getIsMagic()) ? "Not Enough Mana!\n" : "Not Enough Stamina!\n";
}