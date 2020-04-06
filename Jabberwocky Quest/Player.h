#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player {

public:

	// Basic constructor.  Creates Player.
	Player();

	// The player's current health.
	int health;

	// The player's current remaining blocks.
	int blocks;

	// Give the player a name.
	// Pre-Condition:  A string for the name.
	// Post-Condition:  The name is stored in the player's name variable.
	void assignName(string newName);

	// Refill the player's health to max.
	// Pre-Condition:  None.
	// Post-Condition:  The player's health equals their max health.
	void refillHealth();

	// Increase the player's max health.
	// Pre-Condition:  None.
	// Post-Condition:  The player's max health is increased.
	void increasemaxHealth();

	// Increases the player's Attack.
	// Pre-Condition: None.
	// Post-Condition:  The player's Attack is increased.
	void increaseAttack();

	// Increases the player's Defense.
	// Pre-Condition: None.
	// Post-Condition:  The player's defense is increased.
	void increaseDefense();

	// Increases the player's hit chance.
	// Pre-Condition: None.
	// Post-Condition: The player's hit chance is increased.
	void increaseHitChance();

	// Increase the player's block reduction.
	// Pre-Condition: None.
	// Post-Condition: The player's block reduction is increased.
	void increaseBlockReduction();

	// Increase the player's max blocks.
	// Pre-Condition: None.
	// Post-Condition: The player's max blocks are increased.
	void increaseMaxBlocks();

	// Toggles the chain Block Regen ability on.
	// Pre-Condition: None.
	// Post-Condition: The chain Block Regen ability is toggled on.
	void activateChainBlockRegen();

	// Toggles the chain Critical Damage ability on.
	// Pre-Condition: None.
	// Post-Condition: The chain Block Regen ability is toggled on.
	void activateChainCriticalDamage();

	// Toggles the chain Health Regen ability on.
	// Pre-Condition: None.
	// Post-Condition: The chain Block Regen ability is toggled on.
	void activateChainHealthRegen();


private:

	int maxHealth;
	int attack;
	int defense;
	int hitChance;
	double blockReduction;
	int maxBlocks;
	string name;
	bool chainBlockRegen;
	bool chainCriticalDamage;
	bool chainHealthRegen;


};





#endif
