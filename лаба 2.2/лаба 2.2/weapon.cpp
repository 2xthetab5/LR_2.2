#include "weapon.h"
#include <iostream>
#include <string.h>
#include <iostream>
using namespace std;

weapon::weapon(string type_of_weapon, int durability_of_weapon, string color_of_weapon, int ammo_of_weapon) {
	this->type_of_weapon = type_of_weapon;
	this->durability_of_weapon = 0;
	this->color_of_weapon = color_of_weapon;
	this->ammo_of_weapon = 0;
}
weapon::weapon(string type_of_weapon) {
	this->type_of_weapon = type_of_weapon;
}
weapon::weapon() {
	this->type_of_weapon = "laser";
	this->durability_of_weapon = 50;
	this->color_of_weapon = "red";
	this->ammo_of_weapon = 100;


}
weapon::~weapon() {

}
void weapon::input() {
	cout << "������� ����� ������� �������� ��� ������� ��� �����������(machinegun, rocketlauncher, laser): ";
	cin >> type_of_weapon;
	cout << "������� ��������� ������ �������� ���(�� 1 �� 100): ";
	cin >> durability_of_weapon;
	cout << "������� ���� ������ �������� ���(eng): ";
	cin >> color_of_weapon;
	cout << "������� ���������� �������� � ������ �������� ���(�� 0 �� 200): ";
	cin >> ammo_of_weapon;
}
void weapon::output() {
	cout << "������ �������� ��� ������ ������������: " << type_of_weapon << endl;
	cout << "��������� ������ �������� ���: " << durability_of_weapon << endl;
	cout << "���� ������ �������� ���: " << color_of_weapon << endl;
	cout << "���������� �������� � ������ �������� ���: " << ammo_of_weapon << endl;
}