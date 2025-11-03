#include "Skill.h"
#include "formulas.hpp"

Skill::Skill(bool magic, bool damage, bool resource, float p, float c)
    : isMagic(magic), damageSkill(damage), resourceSkill(resource), points(p), cost(c) {
        if (damageSkill && !resourceSkill) { skillType = damageHp; }
        if (!damageSkill && !resourceSkill) { skillType = restoreHp; }
        if (damageSkill && resourceSkill) { skillType = damageResource; }
        if (!damageSkill && resourceSkill) { skillType = restoreResource; }
    }

Skill::~Skill() {}

bool Skill::getIsMagic() const { return isMagic; }
bool Skill::getDamageSkill() const { return damageSkill; }
bool Skill::getResourceSkill() const { return resourceSkill; }
int Skill::getSkillType() const { return skillType; }
float Skill::getPoints() const { return points; }
float Skill::getCost() const { return cost; }