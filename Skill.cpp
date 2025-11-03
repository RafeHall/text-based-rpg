#include "Skill.h"
#include "formulas.hpp"

Skill::Skill(bool magic, int type, float p, float c)
    : isMagic(magic), skillType(type), points(p), cost(c) {}

Skill::~Skill() {}

bool Skill::getIsMagic() const { return isMagic; }
int Skill::getSkillType() const { return skillType; }
float Skill::getPoints() const { return points; }
float Skill::getCost() const { return cost; }