#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "melee.h"
#include "weapon.h"
#include "kind.h"
#include "form.h"
#include "transformer.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int x;
	x = 0;
	kind your_kind = kind::kind("color_of_transformer", "genus", 0);
	melee your_melee = melee::melee("type_of_melee", 0, "color_of_melee");
	weapon your_weapon = weapon::weapon("type_of_weapon", 0, "color_of_weapon", 0);
	form your_form = form::form("model_of_car", 0, 0);
	transformer* your_transformer = new transformer[1];
	for (int i = 0; i < 1; i++)
	{
		your_transformer[i] = transformer::transformer(your_kind, your_melee, your_weapon, your_form);
		your_transformer[i].input();
		your_transformer[i].output();
	}
	while (x != 4) {
		cout << " Введите: 1 - для вывода характеристики вашего трансформера " << endl;
		cout << " 2 - для анализа цветовой гаммы вышего трансформера " << endl;
		cout << " 3 - для анализа скорости вашего трансформера " << endl;
		cout << " 4 - выхода" << endl;
		cin >> x;
		switch (x) {
		case 1:
			your_transformer->output();
			break;
		case 2:
			your_transformer->color(*your_transformer);
			break;
		case 3: 
			your_transformer->speed_type(*your_transformer);
			break;
		}
		fflush(stdin);
	}
	for (int i = 0; i < 1; i++) {
		delete your_transformer;
	}
	delete[] your_transformer;

}