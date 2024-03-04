#include "Inventory.h"

Inventory::Inventory()
{
	inventory.emplace(std::make_pair("Food", 3));
	inventory.emplace(std::make_pair("Wood", 0));
	inventory.emplace(std::make_pair("Rock", 0));
}

int Inventory::GetQuantity(std::string item)
{
	if (inventory.find(item) != inventory.end()) {
		return inventory[item];
	}
	
	return 0;
}

void Inventory::Add(std::string item, int quantity)
{
	if (inventory.find(item) == inventory.end()) {
		inventory.emplace(std::make_pair(item, quantity));
	}
	else {
		inventory[item] += quantity;
	}
}

void Inventory::Remove(std::string item, int quantity)
{
	if (inventory.find(item) != inventory.end()) {
		inventory[item] = Utils::Max(inventory[item] - quantity, 0);
	}
}

void Inventory::Display()
{
	for (auto it = inventory.begin(); it != inventory.end(); ++it) {
		std::cout << it->first << ", " << it->second << '\n';
	}
}
