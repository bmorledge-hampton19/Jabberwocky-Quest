#include "Player.h"
using namespace std;

// Basic constructor.  Creates Player.
Player::Player()
{
	maxHealth = 100;
	attack = 15;
	defense = 10;
	hitChance = 95;
	maxBlocks = 10;
	blockReduction = 0.75;
	chainBlockRegen = false;
	chainCriticalDamage = false;
	chainHealthRegen = false;

}

// Give the player a name.
// Pre-Condition:  A string for the name.
// Post-Condition:  The name is stored in the player's name variable.
void Player::assignName(string newName)
{
	name = newName;
}

// Refill the player's health to max.
// Pre-Condition:  None.
// Post-Condition:  The player's health equals their max health.
void Player::refillHealth()
{
	health = maxHealth;
}

// Increase the player's max health.
// Pre-Condition:  None.
// Post-Condition:  The player's max health is increased.
void Player::increasemaxHealth()
{
	maxHealth += 30;
}

// Increases the player's Attack.
// Pre-Condition: None.
// Post-Condition:  The player's Attack is increased.
void Player::increaseAttack()
{
	attack += 5;

}

// Increases the player's Defense.
// Pre-Condition: None.
// Post-Condition:  The player's defense is increased.
void Player::increaseDefense()
{
	defense += 5;
}

// Increases the player's hit chance.
// Pre-Condition: None.
// Post-Condition: The player's hit chance is increased.
void Player::increaseHitChance()
{
	hitChance = 105;
}

// Increase the player's block reduction.
// Pre-Condition: None.
// Post-Condition: The player's block reduction is increased.
void Player::increaseBlockReduction()
{
	blockReduction = 0.85;
}

// Increase the player's max blocks.
// Pre-Condition: None.
// Post-Condition: The player's max blocks are increased.
void Player::increaseMaxBlocks()
{
	maxBlocks = 15;
}

// Toggles the chain Block Regen ability on.
// Pre-Condition: None.
// Post-Condition: The chain Block Regen ability is toggled on.
void Player::activateChainBlockRegen()
{
	chainBlockRegen = true;
}

// Toggles the chain Critical Damage ability on.
// Pre-Condition: None.
// Post-Condition: The chain Block Regen ability is toggled on.
void Player::activateChainCriticalDamage()
{
	chainCriticalDamage = true;
}

// Toggles the chain Health Regen ability on.
// Pre-Condition: None.
// Post-Condition: The chain Block Regen ability is toggled on.
void Player::activateChainHealthRegen()
{
	chainHealthRegen = true;
}
