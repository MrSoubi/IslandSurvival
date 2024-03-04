#pragma once
#include "Utils.h"

class Player
{
private:
	int health;
	int maxHealth;
	int energy;
	int maxEnergy;


public:
	Player();

	void Heal(int amount);
	void TakeDamage(int amount);
	void Rest();
	void ConsumeEnergy(int amount);
	bool IsDead();

	int GetHealth();
	int GetEnergy();
};

