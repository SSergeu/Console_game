#pragma once
#include <iostream>
#include <string>
using namespace std;

class Personage {
public:
//поля
	string name;
	int heltch;
	int money;
	int time = 5;
	int j=0;
	bool k1=true, k2 = true, k3 = true, k4 = true;

	Personage() {
		heltch = 100;
		money = 0;
	}
//методы 
	void Info() {
		cout <<"\tВаше здоровье: " << heltch <<"/100"<< endl;
		cout <<"\tБаланс " << money << " $" << endl;
		cout << endl;
	}

	void create() {
		cout << "\tВы создали персонажа с именем " << name << endl;
		Info();
	}

	void shot() {
		cout << "\tВы прошли испытание. Теперь Ваше здоровье " << heltch << endl;
		cout << "\tВаш счет: " << money << endl;
	}
	
};