#include "melee.h"
#include <iostream>
#include <string.h>
#include <iostream>
using namespace std;

melee::melee(string type_of_melee, int durability_of_melee, string color_of_melee) {
	this->type_of_melee = type_of_melee;
	this->durability_of_melee = 0;
	this->color_of_melee = color_of_melee;
}
melee::melee(string type_of_melee) {
	this->type_of_melee = type_of_melee;
}
melee::melee() {
	this->type_of_melee = "sword";
	this->durability_of_melee = 100;
	this->color_of_melee = "red";
}
melee::~melee() {

}
void melee::input() {
	cout << "Введите каким оружием ближнего боя владеет ваш трансформер(saw, sword, axe, spear, mace): ";
	cin >> type_of_melee;
	cout << "Введите прочность оружия ближнего боя(от 1 до 100): ";
	cin >> durability_of_melee;
	cout << "Введите цвет оружия ближнего боя(eng): ";
	cin >> color_of_melee;
}
void melee::output() {
	cout << "Оружие ближнего боя вашего трансформера: " << type_of_melee << endl;
	cout << "Прочность оружия ближнего боя: " << durability_of_melee << endl;
	cout << "Цвет оружия ближнего боя: " << color_of_melee << endl;
}