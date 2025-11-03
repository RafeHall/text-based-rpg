#include "Enemy.h"

Enemy::Enemy(const string n,int level)
    : Character(n, level, enemyHp(level), enemyHp(level),enemyResource(level),enemyResource(level),enemyAtk(level), enemyDef(level)) {};

void Enemy::setHpStat() { maxHp = enemyHp(level); hp = enemyHp(level); }

void Enemy::setAtkStat() { atk = enemyAtk(level); }

void Enemy::setDefStat() { def = enemyDef(level); }