#include "Player.h"

Player::Player()
{
	health = 10;
	energy = 10;
	maxHealth = 10;
	maxEnergy = 10;
}

void Player::Heal(int amount)
{
	health = Utils::Min(health + amount, maxHealth);
}

void Player::TakeDamage(int amount)
{
	health -= amount;
}

void Player::Rest()
{
	energy = Utils::Min(energy + 2, maxEnergy);
}

void Player::ConsumeEnergy(int amount)
{
	energy -= amount;
}

bool Player::IsDead()
{
	return health <= 0;
}

int Player::GetHealth()
{
	return health;
}

int Player::GetEnergy()
{
	return energy;
}
