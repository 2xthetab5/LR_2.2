#include "form.h"
#include <iostream>
#include <string.h>
#include <iostream>
using namespace std;

form::form(string model_of_car, int speed, int horsepower) {
	this->model_of_car = model_of_car;
	this->speed = 0;
	this->horsepower = 0;
}
form::form(string model_of_car) {
	this->model_of_car = model_of_car;
}
form::form() {
	this->model_of_car = "tank";
	this->speed = 200;
	this->horsepower = 300;
}
form::~form() {

}
void form::input() {
	cout << "������� � ����� ��������� ������������ ��� �����������(sportcar, truck, tank, jeep): ";
	cin >> model_of_car;
	cout << "������� ���������� ��������� ��� � ����������, � ������� ������������ ��� �����������(�� 100 �� 1000): ";
	cin >> horsepower;
	cout << "������� ������������ �������� ����������(� ��/�), � ������� ������������ ��� �����������(�� 120 �� 400): ";
	cin >> speed;
}
void form::output() {
	cout << "���������, � ������� ������������ ��� �����������: " << model_of_car << endl;
	cout << "���������� ��������� ��� ����������, � ������� ������������ ��� �����������: " << horsepower << endl;;
	cout << "������������ �������� ����������, � ������� ������������ ��� �����������: " << speed << endl;
}