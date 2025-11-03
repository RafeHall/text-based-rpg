#ifndef SKILL_H
#define SKILL_H

class Skill {
private:
    bool isMagic;
    int skillType;
    float points;
    float cost;
public:
    // constructor / destructor
    Skill(bool magic, int type, float p, float c);
    virtual ~Skill();

    // getters
    bool getIsMagic() const;
    int getSkillType() const;
    float getPoints() const;
    float getCost() const;
};

#endif