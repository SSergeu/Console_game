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



class inflation: public main {   //тест на тему инфляция
	//констурктор 
public:
	inflation() {
		damage = 80;
		income = 500;
		name = "Инфляция";
	}
	//тест 1
	void test1() {
		damage = 0;
		income = 0;
		cout << "\tКому наиболее выгодно замедление темпа инфляции?" << endl;
		cout << "\t1)Населению государства\n\t2)Центробанку\n\t3)Продавцам, торгующим в рассрочку"<<endl;
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
	//тест 2
	void test2() {
		cout << "\tПеречислите меры, способствующие снижению инфляции:" << endl;
		cout << "\t1)Увеличение зарплат и пенсий\n\t2)Отказ от роста зарплат и пенсий, изъятие Центробанком «лишних» денег из оборота"<<endl;
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
	//тест 3
	void test3() {
		cout << "\tУровень цен вырос в 2 раза. При этом в 2 раза сократится:" << endl;
		cout << "\t1)Спрос на товары и услуги\n\t2)Предложение товаров и услуг\n\t3)Покупательская способность денег" << endl;
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

//ипотека

class mortgage: public inflation {
public:
	mortgage() {
		damage = 60;
		income = 500;
		name = "Ипотека";
	}

	void test1() {
		damage = 0;
		income = 0;
		cout << "\tКакую долю семейного дохода рекомендуется направлять на ипотеку?" << endl;
		cout << "\t1)До 40%\n\t2)От 40% до 70%\n\t3)Всё, что есть, а питаться картошкой с дачи и  закрутками" << endl;
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
		cout << "\tЧто подразумевает под собой ипотечный кредит?" << endl;
		cout << "\t1)Кредит с обязательным залогом\n\t2)Кредит, который выдают только в банке\n\t3)Кредит, который должны выплачивать все члены семьи" << endl;
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
		cout << "\tЧто будет, если не платить по ипотеке?" << endl;
		cout << "\t1)Придут приставы и опишут телевизор и холодильник\n\t2)Придут коллекторы и побьют окна\n\t3)Квартиру продадут на торгах" << endl;
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


//доллар

class dollare : public inflation {
public:
	dollare() {
		damage = 60;
		income = 600;
		name = "Доллар";
	}
	void test1() {
		damage = 0;
		income = 0;
		cout << "\tДоллар был утвержден в качестве основной денежной единицы страны по инициативе первого министра финансов США. Его имя?" << endl;
		cout << "\t1)Джеймс Гарфилд\n\t2)Теодор Рузвельт\n\t3)Александр Гамильтон" << endl;
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
		cout << "\tНа американских долларах уже была изображена женщина. Кто она?" << endl;
		cout << "\t1)Марта Вашингтон\n\t2)Элеонора Рузвельт\n\t3)Маргарет Беннер" << endl;
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
		cout << "\tКаким был самый большой номинал доллара?" << endl;
		cout << "\t1)Купюры в 100 долларов\n\t2)Бывали купюры в 100 тысяч\n\t3)10 тысяч долларов	" << endl;
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

//кредит 

class procent : public inflation {
public:
	procent() {
		damage = 60;
		income = 400;
		name = "Проценты";
	}
	void test1() {
		damage = 0;
		income = 0;
		cout << "\tКредит - это …" << endl;
		cout << "\t1)Экономическое явление\n\t2)Система купли - продажи судного фонда\n\t3)Механизм использования денежных ресурсов" << endl;
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
		cout << "\tВсеобщим свойством, основой кредита является:" << endl;
		cout << "\t1)Платность\n\t2)Возвратность\n\t3)Обеспеченность" << endl;
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
		cout << "\tГлавный смысл кредитной политики состоит в том, чтобы …" << endl;
		cout << "\t1)Обеспечить инвестициями расширенное воспроизводство\n\t2)Наладить взаимодействие инвесторов и предпринимателей\n\t3)Продать временно свободные ценности подороже, а купить подешевле" << endl;
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