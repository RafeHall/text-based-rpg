#pragma once
#include "Character.h"
#include "Skill.h"
#include "formulas.hpp"

inline void action(Character* source,Character* target,Skill* skill) {
    // check if enough resources
    if (source->getResource() < skill->getCost()) { (source->getIsMagic()) ? "Not Enough Mana!" : "Not Enough Stamina!"; return; }

    // decrease resource
    source->setResource(source->getResource() - skill->getCost());

    // compute points
    float points = (skill->getDamageSkill()) ? computeAttackPoints(skill->getPoints(),source->getAtk(),target->getDef(),target->getIsDefending()) : computeRestorePoints(skill->getPoints(),source->getAtk());

    // perform action
    if (skill->getSkillType() == damageHp) { 
        if (target->getHp() <= points) { target->setHp(0); }
        else { target->setHp(target->getHp() - points); }
    }
    else if (skill->getSkillType() == restoreHp) { 
        if (target->getMaxHp() < points) { target->setHp(target->getMaxHp()); }
        else { target->setHp(target->getHp() + points); }
    }
    else if (skill->getSkillType() == damageResource) {
        if (target->getResource() <= points) { target->setResource(0); }
        else { target->setResource(target->getResource() - points); }
    }
    else { // restoreResource
        if (target->getMaxResource() < points) { target->setResource(target->getMaxResource()); }
        else { target->setResource(target->getResource() + points); }
    }
}