#pragma once
#include <iostream>
using namespace std;


class main {   
public:
	string name;
	int damage;
	int income; 
	int score=0;
};



class inflation: public main {   //���� �� ���� ��������
	//����������� 
public:
	inflation() {
		damage = 80;
		income = 500;
		name = "��������";
	}
	//���� 1
	void test1() {
		damage = 0;
		income = 0;
		cout << "\t���� �������� ������� ���������� ����� ��������?" << endl;
		cout << "\t1)��������� �����������\n\t2)�����������\n\t3)���������, ��������� � ���������"<<endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 5;
			income = income + 200;
			score++;
		}
		else if (i==2) {
			damage = damage + 35;
			income = income + 50;
		}
		else if (i == 3) {
			damage = damage + 35;
			income = income + 50;
		}
	}
	//���� 2
	void test2() {
		cout << "\t����������� ����, �������������� �������� ��������:" << endl;
		cout << "\t1)���������� ������� � ������\n\t2)����� �� ����� ������� � ������, ������� ������������ �������� ����� �� �������"<<endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 25;
			income = income + 50;
		}
		else if (i == 2) {
			damage = damage + 5;
			income = income + 200;
			score++;
		}
	}
	//���� 3
	void test3() {
		cout << "\t������� ��� ����� � 2 ����. ��� ���� � 2 ���� ����������:" << endl;
		cout << "\t1)����� �� ������ � ������\n\t2)����������� ������� � �����\n\t3)�������������� ����������� �����" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 25;
			income = income + 50;
		}
		if (i == 2) {
			damage = damage + 25;
			income = income + 50;
		}
		if (i == 3) {
			damage = damage + 5;
			income = income + 100;
			score++;
		}
	}
};

//�������

class mortgage: public inflation {
public:
	mortgage() {
		damage = 60;
		income = 500;
		name = "�������";
	}

	void test1() {
		damage = 0;
		income = 0;
		cout << "\t����� ���� ��������� ������ ������������� ���������� �� �������?" << endl;
		cout << "\t1)�� 40%\n\t2)�� 40% �� 70%\n\t3)��, ��� ����, � �������� ��������� � ���� �  ����������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 5;
			income = income + 200;
			score++;
		}
		if (i == 2) {
			damage = damage + 20;
			income = income + 50;
		}
		if (i == 3) {
			damage = damage + 20;
			income = income + 50;
		
		}
	}
	void test2() {
		cout << "\t��� ������������� ��� ����� ��������� ������?" << endl;
		cout << "\t1)������ � ������������ �������\n\t2)������, ������� ������ ������ � �����\n\t3)������, ������� ������ ����������� ��� ����� �����" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 5;
			income = income + 200;
			score++;
		}
		if (i == 2) {
			damage = damage + 20;
			income = income + 50;
		}
		if (i == 3) {
			damage = damage + 20;
			income = income + 50;
		}
	}
	void test3() {
		cout << "\t��� �����, ���� �� ������� �� �������?" << endl;
		cout << "\t1)������ �������� � ������ ��������� � �����������\n\t2)������ ���������� � ������ ����\n\t3)�������� �������� �� ������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 20;
			income = income + 50;
		}
		if (i == 2) {
			damage = damage + 20;
			income = income + 50;
		}
		if (i == 3) {
			damage = damage + 5;
			income = income + 100;
			score++;
		}
	}
};


//������

class dollare : public inflation {
public:
	dollare() {
		damage = 60;
		income = 600;
		name = "������";
	}
	void test1() {
		damage = 0;
		income = 0;
		cout << "\t������ ��� ��������� � �������� �������� �������� ������� ������ �� ���������� ������� �������� �������� ���. ��� ���?" << endl;
		cout << "\t1)������ �������\n\t2)������ ��������\n\t3)��������� ���������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 20;
			income = income + 50;
		}
		if (i == 2) {
			damage = damage + 20;
			income = income + 50;
		}
		if (i == 3) {
			damage = damage + 5;
			income = income + 200;
			score++;
		}
	}
	void test2() {
		cout << "\t�� ������������ �������� ��� ���� ���������� �������. ��� ���?" << endl;
		cout << "\t1)����� ���������\n\t2)�������� ��������\n\t3)�������� ������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 5;
			income = income + 200;
			score++;
		}
		if (i == 2) {
			damage = damage + 20;
			income = income + 50;
		}
		if (i == 3) {
			damage = damage + 20;
			income = income + 50;
		}
	}
	void test3() {
		cout << "\t����� ��� ����� ������� ������� �������?" << endl;
		cout << "\t1)������ � 100 ��������\n\t2)������ ������ � 100 �����\n\t3)10 ����� ��������	" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 20;
			income = income + 50;
		}
		if (i == 2) {
			damage = damage + 5;
			income = income + 200;
			score++;
		}
		if (i == 3) {
			damage = damage + 20;
			income = income + 50;
		}
	}
};

//������ 

class procent : public inflation {
public:
	procent() {
		damage = 60;
		income = 400;
		name = "��������";
	}
	void test1() {
		damage = 0;
		income = 0;
		cout << "\t������ - ��� �" << endl;
		cout << "\t1)������������� �������\n\t2)������� ����� - ������� ������� �����\n\t3)�������� ������������� �������� ��������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 5;
			income = income + 200;
			score++;
		}
		if (i == 2) {
			damage = damage + 20;
			income = income + 50;
		}
		if (i == 3) {
			damage = damage + 20;
			income = income + 50;
		}
	}
	void test2() {
		cout << "\t�������� ���������, ������� ������� ��������:" << endl;
		cout << "\t1)���������\n\t2)������������\n\t3)��������������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 20;
			income = income + 50;
		}
		if (i == 2) {
			damage = damage + 5;
			income = income + 100;
			score++;
		}
		if (i == 3) {
			damage = damage + 20;
			income = income + 50;
		}
	}
	void test3() {
		cout << "\t������� ����� ��������� �������� ������� � ���, ����� �" << endl;
		cout << "\t1)���������� ������������ ����������� ���������������\n\t2)�������� �������������� ���������� � ����������������\n\t3)������� �������� ��������� �������� ��������, � ������ ���������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 20;
			income = income + 50;
		}
		if (i == 2) {
			damage = damage + 20;
			income = income + 50;
		}
		if (i == 3) {
			damage = damage + 5;
			income = income + 100;
			score++;
		}
	}
};