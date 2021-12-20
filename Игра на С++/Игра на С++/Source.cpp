#include <iostream>
#include "Windows.h" //русификация
#include <ctime> //для рандома
#include <cstdlib> //для паузы
#include "Personage.h" //класс игрока
#include "trials.h" // классы испытаний
#include <fstream> //для сохранения 
#include <string> //работа со строками 

using namespace std; 

void timest(double a) { //восстановление здоровья в секунды 
	a = a * 1000;
	return Sleep(a);
} 


int main() {
	SetConsoleCP(1251);  
	SetConsoleOutputCP(1251);  

	srand(time(NULL));

	string path = "SaveProgres.txt";
	string npath = "SaveName.txt";
	//Введение в игру

	Personage player; // класс игрока
	inflation inf;
	mortgage ipot;
	dollare dol;
	procent credit;
	
	cout << "\tПриветствую тебя в игре Экономист!\n\tТвоя задача заработать на новый айфон 2000$\n" << endl;
	cout << "\tЗагрузить сохранение последней игры?" << endl;
	cout << "\t1)Да\n\t2)Нет" << endl;
	int cs;
	cin >> cs;
	if (cs == 1) {       //выгрузка из файла с именем 
		fstream nsave;
		nsave.open(npath);
		if (!nsave.is_open()) {
			cout << "\tНе удалось найти сохранение" << endl;
		}
		else {
			nsave >> player.name;
			cout << "\nСохранение загружено" << endl;
			cout << "\t\nТвоё имя: " << player.name << endl;
		}
		nsave.close();
		fstream prosave;      //выгрузка из файла с прогрессом 
		prosave.open(path);
		if (!prosave.is_open()) {
			cout << "Не удалось загрузить сохранение" << endl;
		}
		else {
			prosave >> player.money;
			cout << "\tБаланс: " << player.money << endl;
			prosave >> player.k1;
			prosave >> player.k2;
			prosave >> player.k3;
			prosave >> player.k4;
			prosave >> player.j;
			cout << "\tБаллов " << player.j << "/12" << endl << endl;
		}
		prosave.close();
	}
	else {
		cout << "\tПредставься: ";
		cin >> player.name;
		cout << endl;
		player.create();
		cout << "\tСейчас у тебя максимальное здоровье, оно будет тратиться в зависимости от твоего выбора, но затем восстанавливаться, чем больше нужно восстановить, тем дольше ты будешь ждать." << endl<<endl;
		ofstream saven; //сохранение в файл имени
		saven.open(npath);
		saven << player.name;
		saven.close();
	}
	
	cout << "\tДоступны следующие задания:" << endl << endl;
	
	
	
	int choise;

	//сюжет, выбор испытания

	for (int i = 0; i < 4; i++) {
		if (player.k1 == true) {
			cout << "\t1)" << inf.name << " " << " Доход: " << inf.income << "$ " << "Урон: " << inf.damage << endl;
		}
		if (player.k2 == true) {
			cout << "\t2)" << ipot.name << " " << " Доход: " << ipot.income << "$ " << "Урон: " << ipot.damage << endl;
		}
		if (player.k3 == true) {
			cout << "\t3)" << dol.name << " " << " Доход: " << dol.income << "$ " << "Урон: " << dol.damage << endl;
		}
		if (player.k4 == true) {
			cout << "\t4)" << credit.name << " " << " Доход: " << credit.income << "$ " << "Урон: " << credit.damage << endl;
		}
		cout << endl;
		cin >> choise;
		if (choise == 1) {
			player.k1 = false;
			cout << "\tТвой противник - инфляция. Тебе необходимо пройти тест и, в зависимости от твоих ответов, ты получишь прибыль, а так же урон от 15 (при всех правильных ответах) до 60 (при всех неправильных)" << endl << endl;
			inf.test1();
			inf.test2();
			inf.test3();
			cout << endl;
			cout << "\tТы прошел тест и вот твои результаты:" << endl;
			player.heltch = player.heltch - inf.damage;
			player.money = player.money + inf.income;
			cout << "\tУрон: " << inf.damage << endl;
			cout << "\tДоход: " << inf.income << endl;
			cout << "\tБаллы: " << inf.score << "/3" << endl << endl;
			cout << "\tТвой баланс: " << player.money << endl;
			player.j += inf.score;
		}
		if (choise == 2) {
			player.k2 = false;
			cout << "\tТвой противник - ипотека. Тебе необходимо пройти тест и, в зависимости от твоих ответов, ты получишь прибыль, а так же урон от 15 (при всех правильных ответах) до 60 (при всех неправильных)" << endl << endl;
			ipot.test1();
			ipot.test2();
			ipot.test3();
			cout << endl;
			cout << "\tТы прошел тест и вот твои результаты:" << endl;
			player.heltch = player.heltch - ipot.damage;
			player.money = player.money + ipot.income;
			cout << "\tУрон: " << ipot.damage << endl;
			cout << "\tДоход: " << ipot.income << endl;
			cout << "\tБаллы: " << ipot.score << "/3" << endl << endl;
			cout << "\tТвой баланс: " << player.money << endl;
			player.j+= ipot.score;
		}
		if (choise == 3) {
			player.k3 = false;
			cout << "\tТвой противник - доллар. Тебе необходимо пройти тест и, в зависимости от твоих ответов, ты получишь прибыль, а так же урон от 15 (при всех правильных ответах) до 60 (при всех неправильных)" << endl << endl;
			dol.test1();
			dol.test2();
			dol.test3();
			cout << endl;
			cout << "\tТы прошел тест и вот твои результаты:" << endl;
			player.heltch = player.heltch - dol.damage;
			player.money = player.money + dol.income;
			cout << "\tУрон: " << dol.damage << endl;
			cout << "\tДоход: " << dol.income << endl;
			cout << "\tБаллы: " << dol.score << "/3" << endl << endl;
			cout << "\tТвой баланс: " << player.money << endl;
			player.j+=dol.score;
		}
		if (choise == 4) {
			player.k4 = false;
			cout << "\tТвой противник - кредит. Тебе необходимо пройти тест и, в зависимости от твоих ответов, ты получишь прибыль, а так же урон от 15 (при всех правильных ответах) до 60 (при всех неправильных)" << endl << endl;
			credit.test1();
			credit.test2();
			credit.test3();
			cout << endl;
			cout << "\tТы прошел тест и вот твои результаты:" << endl;
			player.heltch = player.heltch - credit.damage;
			player.money = player.money + credit.income;
			cout << "\tУрон: " << credit.damage << endl;
			cout << "\tДоход: " << credit.income << endl;
			cout << "\tБаллы: " << credit.score << "/3" << endl << endl;
			cout << "\tТвой баланс: " << player.money << endl;
			player.j+=credit.score;
		}
		
		cout << endl;
		cout << "\tЗдоровье: " << player.heltch << "/100" << endl;
		cout << "\tНеобходимо отдохнуть и восстановить силы. 1 секунда = 1 единице здоровья." << endl << endl;

		if (player.heltch < 100) {
			while (player.heltch < 100) {
				timest(player.time);
				player.heltch = player.heltch + 5;
				if (player.heltch > 99) {
					player.heltch = 100;
					cout << "\tЗдоровье восстановлено: " << player.heltch << "/100" << endl << endl;
				}
				else {
					cout << "\tВосстановлено здоровья: " << player.heltch << "/100" << endl;
				}
			}
		}

		
		ofstream fout;      //сохранение прогресса 
		fout.open(path);
		if (!fout.is_open()) {
			cout << "\tСохранить не удалось" << endl;
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
			cout << "\tРезультаты сохранены!" << endl << endl;
		}
		fout.close();

		cout << "\tДля продолжения игры нажмите Enter" << endl;
		system("pause>nul");
		cout << endl;		
	}
		cout << "\tТы прошёл все испытания. Твой баланс: " << player.money << "$" << endl;
		cout << "\tВсего ты сделал " << 12 - player.j << " ошибок" << endl;

	//розыгрыш и конец игры
	

	if (player.money < 2000) {
		cout << "\tДо цели тебе не хватает: " << 2000 - player.money << "$" << endl;
		cout << "\tУ тебя есть 3 лотерейных билета и ты можешь выиграть от 1 до 500$" << endl <<endl ;
		for (int i = 1; i < 4; i++) {
			cout << "\tНажми Enter для проверки билета номер "<<i<<endl;
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
			cout << "\tТвой выигрыш = " << win << "$" << endl;
			player.money += win;
		}
		cout << "\tБаланс: " << player.money << "$" << endl;
		if (player.money >= 2000) {
			cout << "\tПоздравляю! Ты достиг цель и накопил 2000$\n\tСпасибо за игру!" << endl;
		}
		else {
			cout << "\tК сожалению, ты не справился с задачей и проиграл, попробуй пройти игру ещё раз!" << endl;

		}
	}
	else {
		cout << "\tТы молодец и прошёл всё с первого раза! Я думаю, с такими знаниями тебе и в жизни будет несложно накопить на то, что ты хочешь!" << endl << endl;
		cout << "\tСпасибо за игру!" << endl;
		system("pause>nul");
	}

	return 0;
}