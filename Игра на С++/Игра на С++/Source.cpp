#include <iostream>
#include "Windows.h" //�����������
#include <ctime> //��� �������
#include <cstdlib> //��� �����
#include "Personage.h" //����� ������
#include "trials.h" // ������ ���������
#include <fstream> //��� ���������� 
#include <string> //������ �� �������� 

using namespace std; 

void timest(double a) { //�������������� �������� � ������� 
	a = a * 1000;
	return Sleep(a);
} 


int main() {
	SetConsoleCP(1251);  
	SetConsoleOutputCP(1251);  

	srand(time(NULL));

	string path = "SaveProgres.txt";
	string npath = "SaveName.txt";
	//�������� � ����

	Personage player; // ����� ������
	inflation inf;
	mortgage ipot;
	dollare dol;
	procent credit;
	
	cout << "\t����������� ���� � ���� ���������!\n\t���� ������ ���������� �� ����� ����� 2000$\n" << endl;
	cout << "\t��������� ���������� ��������� ����?" << endl;
	cout << "\t1)��\n\t2)���" << endl;
	int cs;
	cin >> cs;
	if (cs == 1) {       //�������� �� ����� � ������ 
		fstream nsave;
		nsave.open(npath);
		if (!nsave.is_open()) {
			cout << "\t�� ������� ����� ����������" << endl;
		}
		else {
			nsave >> player.name;
			cout << "\n���������� ���������" << endl;
			cout << "\t\n��� ���: " << player.name << endl;
		}
		nsave.close();
		fstream prosave;      //�������� �� ����� � ���������� 
		prosave.open(path);
		if (!prosave.is_open()) {
			cout << "�� ������� ��������� ����������" << endl;
		}
		else {
			prosave >> player.money;
			cout << "\t������: " << player.money << endl;
			prosave >> player.k1;
			prosave >> player.k2;
			prosave >> player.k3;
			prosave >> player.k4;
			prosave >> player.j;
			cout << "\t������ " << player.j << "/12" << endl << endl;
		}
		prosave.close();
	}
	else {
		cout << "\t�����������: ";
		cin >> player.name;
		cout << endl;
		player.create();
		cout << "\t������ � ���� ������������ ��������, ��� ����� ��������� � ����������� �� ������ ������, �� ����� �����������������, ��� ������ ����� ������������, ��� ������ �� ������ �����." << endl<<endl;
		ofstream saven; //���������� � ���� �����
		saven.open(npath);
		saven << player.name;
		saven.close();
	}
	
	cout << "\t�������� ��������� �������:" << endl << endl;
	
	
	
	int choise;

	//�����, ����� ���������

	for (int i = 0; i < 4; i++) {
		if (player.k1 == true) {
			cout << "\t1)" << inf.name << " " << " �����: " << inf.income << "$ " << "����: " << inf.damage << endl;
		}
		if (player.k2 == true) {
			cout << "\t2)" << ipot.name << " " << " �����: " << ipot.income << "$ " << "����: " << ipot.damage << endl;
		}
		if (player.k3 == true) {
			cout << "\t3)" << dol.name << " " << " �����: " << dol.income << "$ " << "����: " << dol.damage << endl;
		}
		if (player.k4 == true) {
			cout << "\t4)" << credit.name << " " << " �����: " << credit.income << "$ " << "����: " << credit.damage << endl;
		}
		cout << endl;
		cin >> choise;
		if (choise == 1) {
			player.k1 = false;
			cout << "\t���� ��������� - ��������. ���� ���������� ������ ���� �, � ����������� �� ����� �������, �� �������� �������, � ��� �� ���� �� 15 (��� ���� ���������� �������) �� 60 (��� ���� ������������)" << endl << endl;
			inf.test1();
			inf.test2();
			inf.test3();
			cout << endl;
			cout << "\t�� ������ ���� � ��� ���� ����������:" << endl;
			player.heltch = player.heltch - inf.damage;
			player.money = player.money + inf.income;
			cout << "\t����: " << inf.damage << endl;
			cout << "\t�����: " << inf.income << endl;
			cout << "\t�����: " << inf.score << "/3" << endl << endl;
			cout << "\t���� ������: " << player.money << endl;
			player.j += inf.score;
		}
		if (choise == 2) {
			player.k2 = false;
			cout << "\t���� ��������� - �������. ���� ���������� ������ ���� �, � ����������� �� ����� �������, �� �������� �������, � ��� �� ���� �� 15 (��� ���� ���������� �������) �� 60 (��� ���� ������������)" << endl << endl;
			ipot.test1();
			ipot.test2();
			ipot.test3();
			cout << endl;
			cout << "\t�� ������ ���� � ��� ���� ����������:" << endl;
			player.heltch = player.heltch - ipot.damage;
			player.money = player.money + ipot.income;
			cout << "\t����: " << ipot.damage << endl;
			cout << "\t�����: " << ipot.income << endl;
			cout << "\t�����: " << ipot.score << "/3" << endl << endl;
			cout << "\t���� ������: " << player.money << endl;
			player.j+= ipot.score;
		}
		if (choise == 3) {
			player.k3 = false;
			cout << "\t���� ��������� - ������. ���� ���������� ������ ���� �, � ����������� �� ����� �������, �� �������� �������, � ��� �� ���� �� 15 (��� ���� ���������� �������) �� 60 (��� ���� ������������)" << endl << endl;
			dol.test1();
			dol.test2();
			dol.test3();
			cout << endl;
			cout << "\t�� ������ ���� � ��� ���� ����������:" << endl;
			player.heltch = player.heltch - dol.damage;
			player.money = player.money + dol.income;
			cout << "\t����: " << dol.damage << endl;
			cout << "\t�����: " << dol.income << endl;
			cout << "\t�����: " << dol.score << "/3" << endl << endl;
			cout << "\t���� ������: " << player.money << endl;
			player.j+=dol.score;
		}
		if (choise == 4) {
			player.k4 = false;
			cout << "\t���� ��������� - ������. ���� ���������� ������ ���� �, � ����������� �� ����� �������, �� �������� �������, � ��� �� ���� �� 15 (��� ���� ���������� �������) �� 60 (��� ���� ������������)" << endl << endl;
			credit.test1();
			credit.test2();
			credit.test3();
			cout << endl;
			cout << "\t�� ������ ���� � ��� ���� ����������:" << endl;
			player.heltch = player.heltch - credit.damage;
			player.money = player.money + credit.income;
			cout << "\t����: " << credit.damage << endl;
			cout << "\t�����: " << credit.income << endl;
			cout << "\t�����: " << credit.score << "/3" << endl << endl;
			cout << "\t���� ������: " << player.money << endl;
			player.j+=credit.score;
		}
		
		cout << endl;
		cout << "\t��������: " << player.heltch << "/100" << endl;
		cout << "\t���������� ��������� � ������������ ����. 1 ������� = 1 ������� ��������." << endl << endl;

		if (player.heltch < 100) {
			while (player.heltch < 100) {
				timest(player.time);
				player.heltch = player.heltch + 5;
				if (player.heltch > 99) {
					player.heltch = 100;
					cout << "\t�������� �������������: " << player.heltch << "/100" << endl << endl;
				}
				else {
					cout << "\t������������� ��������: " << player.heltch << "/100" << endl;
				}
			}
		}

		
		ofstream fout;      //���������� ��������� 
		fout.open(path);
		if (!fout.is_open()) {
			cout << "\t��������� �� �������" << endl;
		}
		else {
			fout << player.money;
			fout << "\n";
			fout << player.k1;
			fout << "\n";
			fout << player.k2;
			fout << "\n";
			fout << player.k3;
			fout << "\n";
			fout << player.k4;
			fout << "\n";
			fout << player.j;			
			cout << "\t���������� ���������!" << endl << endl;
		}
		fout.close();

		cout << "\t��� ����������� ���� ������� Enter" << endl;
		system("pause>nul");
		cout << endl;		
	}
		cout << "\t�� ������ ��� ���������. ���� ������: " << player.money << "$" << endl;
		cout << "\t����� �� ������ " << 12 - player.j << " ������" << endl;

	//�������� � ����� ����
	

	if (player.money < 2000) {
		cout << "\t�� ���� ���� �� �������: " << 2000 - player.money << "$" << endl;
		cout << "\t� ���� ���� 3 ���������� ������ � �� ������ �������� �� 1 �� 500$" << endl <<endl ;
		for (int i = 1; i < 4; i++) {
			cout << "\t����� Enter ��� �������� ������ ����� "<<i<<endl;
			system("pause>nul");
			for (int i = 3; i > 0; i--) {
				cout << "\t" << i;
				for (int i = 3; i > 0; i--) {
					Sleep(300);
					cout << " . ";
				}
				cout << endl;
			}
			int win = rand() % 500  + 1 ;
			cout << "\t���� ������� = " << win << "$" << endl;
			player.money += win;
		}
		cout << "\t������: " << player.money << "$" << endl;
		if (player.money >= 2000) {
			cout << "\t����������! �� ������ ���� � ������� 2000$\n\t������� �� ����!" << endl;
		}
		else {
			cout << "\t� ���������, �� �� ��������� � ������� � ��������, �������� ������ ���� ��� ���!" << endl;

		}
	}
	else {
		cout << "\t�� ������� � ������ �� � ������� ����! � �����, � ������ �������� ���� � � ����� ����� �������� �������� �� ��, ��� �� ������!" << endl << endl;
		cout << "\t������� �� ����!" << endl;
		system("pause>nul");
	}

	return 0;
}