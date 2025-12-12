// Copyright @ Ken Arigo - VFS 2025-2026

#pragma once
#include "Utils.hpp"
#include "Object.hpp"
#include <format>

class Consumable : Object
{
public:
	Consumable(std::pair<int, int> Position, int Points) : _points(Points) { _name = "CustomConsumable:" + ID++; };
	Consumable(std::pair<int, int> Position) : Object(), _points(10) { _name = "Pellet" + ID; }
protected:
	int _points;
	static int ID;
};

int Consumable::ID = 0;