#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class melee
{
	public:
		string type_of_melee;
		int durability_of_melee;
		string color_of_melee;
		melee(string type_of_melee, int durability_of_melee, string color_of_melee);
		melee(string type_of_melee);
		melee();
		~melee();
		void input();
		void output();
};