#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "melee.h"
#include "weapon.h"
#include "kind.h"
#include "form.h"

using namespace std;

class transformer
{
	private:
		melee your_melee;
		weapon your_weapon;
		kind your_kind;
		form your_form;
	public:
		transformer(kind your_kind, melee your_melee, weapon your_weapon, form your_form);
		transformer(melee your_melee);
		transformer();
		~transformer();
		void input();
		void output();
		void color(transformer your_transformer);
		void speed_type(transformer your_transformer);
};

