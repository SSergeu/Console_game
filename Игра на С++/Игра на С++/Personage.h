#pragma once
#include <iostream>
#include <string>
using namespace std;

class Personage {
public:
//����
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
//������ 
	void Info() {
		cout <<"\t���� ��������: " << heltch <<"/100"<< endl;
		cout <<"\t������ " << money << " $" << endl;
		cout << endl;
	}

	void create() {
		cout << "\t�� ������� ��������� � ������ " << name << endl;
		Info();
	}

	void shot() {
		cout << "\t�� ������ ���������. ������ ���� �������� " << heltch << endl;
		cout << "\t��� ����: " << money << endl;
	}
	
};