#pragma once
#include <map>
#include <string>
#include <iostream>
#include "Utils.h"

class Inventory
{
private:
	std::map<std::string, int> inventory;

public:
	Inventory();
	int GetQuantity(std::string item);
	void Add(std::string item, int quantity);
	void Remove(std::string item, int quantity);
	void Display();
};

