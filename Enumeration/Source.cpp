#include <iostream>
using namespace std;

int main()
{
	// Перечисления - это тип, который может содержать значения, указанные программистом. 
	// Целочисленные именованные константы могут быть определены как члены перечисления.
	// Синтаксис объявления перечислений:
	//      enum имя {константа_1, константа_2, ...};
	// имя - имя перечисления.
	// константа_1, константа_2 - именованные константы.
	enum Color { Red, Green, Blue };

	// Перечисление выше определяет три целочисленные константы и присваивает им значения. По 
	// умолчанию, значения присваиваются по порядку начиная с нуля, т.е. Red == 0, Green == 1 и 
	// Blue == 2.

	// Каждое перечисление - это отдельный тип, и тип каждого члена перечисления - это само 
	// перечисление. Например, Red имеет тип Color. Объявление типа переменной как Color, вместо 
	// обычного unsigned int, может подсказать программисту и компилятору о том, как эта переменная 
	// должна быть использована. 

	Color someColor = Red;

	switch (someColor)
	{
	case Blue:
		cout << "Color is blue" << endl;
		break;
	case Green:
		cout << "Color is green" << endl;
		break;
	case Red:
		cout << "Color is red" << endl;
		break;
	default:
		cout << "There is no such color" << endl;
	}

	// Также любому из перечислений можно присвоить свое значение. Если какому-то из перечислений 
	// было присвоено значение, а следующему за ним нет, то ему будет присвоенно значение 
	// предыдущего, увеличенное на единицу.
	enum Suits { Hearts = 3, Diamonds, Clubs, Spades};

	cout << endl;
	cout << "Spades = " << char(Spades) << endl;
	cout << "Diamonds = " << char(Diamonds) << endl;
	cout << "Hearts = " << char(Hearts) << endl;
	cout << "Clubs = " << char(Clubs) << endl;

	// Suits m = 3; // ошибка компиляции
	Suits h = Hearts;
	Suits c = Suits(5);
	cout << char(h) << "\t" << char(c) << endl;

	enum Winter { December = 12, January = 1, February };
	enum Spring { March = 3, April, May };
	enum Summer { June = 6, July, August };
	enum Autumn { September = 9, October, November };
	int month;
	Winter w = January;
	cout << w << endl;
	// Spring s = 3; // ошибка компиляции
	Spring s = March;
	Spring d = Spring(3);
	cout << d << endl;
	int n = November;
	cout << n << endl;
	cout << "Enter a month (1 - 12): ";
	cin >> month;
	switch (month)
	{
	case December:
		cout << "It is December!";
		break;
	case January:
		cout << "It is January!";
		break;
	case February:
		cout << "It is February!";
		break;
	case March:
		cout << "It is March!";
		break;
	case April:
		cout << "It is April!";
		break;
	case May:
		cout << "It is May!";
		break;
	case June:
		cout << "It is June!";
		break;
	case July:
		cout << "It is July!";
		break;
	case August:
		cout << "It is August!";
		break;
	case September:
		cout << "It is September!";
		break;
	case October:
		cout << "It is October!";
		break;
	case November:
		cout << "It is November!";
		break;
	default:
		cout << "Incorrect choice!";
	}

	cout << "\nEnter a month (1 - 12): ";
	cin >> month;
	switch (month)
	{
	case December:
	case January:
	case February:
		cout << "It is Winter!";
		break;
	case March:
	case April:
	case May:
		cout << "It is Spring!";
		break;
	case June:
	case July:
	case August:
		cout << "It is Summer!";
		break;
	case September:
	case October:
	case November:
		cout << "It is Autumn!";
		break;
	default:
		cout << "Incorrect choice!";
	}

	return 0;
}