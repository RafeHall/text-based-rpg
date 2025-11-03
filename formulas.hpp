#pragma once

// Constants
constexpr int damageHp = 1;
constexpr int restoreHp = 2;
constexpr int damageResource = 3;
constexpr int restoreResource = 4;

// Core Formulas
inline constexpr float nextLevelFormula(int level) { return level * 125; }
inline constexpr float expDropFormula(int level) { return level * 600; }
inline constexpr float expDropBossFormula(int level) { return level * 103.7; }
inline constexpr float computeAttackPoints(float basePoints,float sourceAtk,float targetDef,bool isDefending) { 
    (isDefending) ? (sourceAtk*0.2)*basePoints - targetDef*1.5 : (sourceAtk*0.2)*basePoints - targetDef; 
}
inline constexpr float computeRestorePoints(float basePoints,float sourceAtk) { return (sourceAtk*0.125)*basePoints; }

// Warrior
inline constexpr float warriorHp(int level) { return 250 + level * 8; }
inline constexpr float warriorResource(int level) { 50 + level * 8; }
inline constexpr float warriorAtk(int level) { return 15 + level * 4; }
inline constexpr float warriorDef(int level) { return 7 + level * 3; }

// Enemy
inline constexpr float enemyHp(int level) { return 250 + level * 5; }
inline constexpr float enemyResource(int level) { 45 + level * 5; }
inline constexpr float enemyAtk(int level) { return 15 + level * 3; }
inline constexpr float enemyDef(int level) { return 7 + level * 2; }

// Boss
inline constexpr float bossHp(int level) { return 500 + level * 8; }
inline constexpr float bossResource(int level) { 50 + level * 8; }
inline constexpr float bossAtk(int level) { return 15 + level * 4; }
inline constexpr float bossDef(int level) { return 7 + level * 3; }