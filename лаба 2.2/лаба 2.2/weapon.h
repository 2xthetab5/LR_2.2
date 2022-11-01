#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class weapon
{
	public:
		string type_of_weapon;
		int durability_of_weapon;
		string color_of_weapon;
		int ammo_of_weapon;
		weapon(string type_of_weapon, int durability_of_weapon, string color_of_weapon, int ammo_of_weapon);
		weapon(string type_of_weapon);
		weapon();
		~weapon();
		void input();
		void output();
};

