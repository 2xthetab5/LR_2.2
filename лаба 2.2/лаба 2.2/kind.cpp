#include "kind.h"
#include <iostream>
#include <string.h>
#include <iostream>
using namespace std;

kind::kind(string color_of_transformer, string genus, int age_of_transformer) {
	this->color_of_transformer = color_of_transformer;
	this->genus = genus;
	this->age_of_transformer = 0;
}
kind::kind(string color_of_transformer) {
	this->color_of_transformer = color_of_transformer;
}
kind::kind() {
	this->color_of_transformer = "black";
	this->genus = "autobot";
	this->age_of_transformer = 300;
}
kind::~kind() {

}
void kind::input() {
	cout << "������� ��� ������ ������������(autobot ��� deseptikon): ";
	cin >> genus;
	cout << "������� ����� ���� ������ ������������(eng): ";
	cin >> color_of_transformer;
	cout << "������� ������� ������ ������������: ";
	cin >> age_of_transformer;
}
void kind::output() {
	cout << "���: " << genus << endl;
	cout << "�������: " << age_of_transformer << endl;
	cout << "����: " << color_of_transformer << endl;
}