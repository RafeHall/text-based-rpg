#ifndef SKILL_H
#define SKILL_H

class Skill {
private:
    bool isMagic;
    bool damageSkill;
    bool resourceSkill;
    int skillType;
    float points;
    float cost;
public:
    // constructor / destructor
    Skill(bool magic, bool damage, bool resource, float p, float c);
    virtual ~Skill();

    // getters
    bool getIsMagic() const;
    bool getDamageSkill() const;
    bool getResourceSkill() const;
    int getSkillType() const;
    float getPoints() const;
    float getCost() const;
};

#endif