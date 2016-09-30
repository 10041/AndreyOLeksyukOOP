#include "stdafx.h"
#include <iostream>

using namespace std;
Square::Square()
{
	
	std::cout << "вызов конструктора без параметров" << std::endl;
	h = 0;
	l = 0;
}

Square::Square(int a, int b)
{
	cout << "вызов конструктора c параметрами" << endl;
	if (a > 0 && b > 0)
	{
		h = a;
		l = b;
		PL = a * b;
		PR = 2 * (a + b);
		cout << "высота:" << h << endl << "ширина:" << l << endl << "площадь:" << PL << endl << "периметр:" << PR << endl;

	}
	else
		cout << "неврные данные" << endl;

}


void Square::setSize()
{
	int a, b;
	cout << "высота:" << endl;
	cin >> a;
	cout << "ширина:" << endl;
	cin >> b;
	if (a > 0 && b > 0)
	{
		h = a;
		l = b;
		PL = a * b;
		PR = 2 * (a + b);
		cout << "номер:"  << endl << "площадь:" << PL << endl << "периметр:" << PR << endl;
	}
	else
		cout << "неверные данные" << endl;
}

void Square::newSquare(int a, int b)
{
	if (a > 0 && b > 0)
	{
		h = a;
		l = b;
		PL = a * b;
		PR = 2 * (a + b);

	}
	else
		cout << "неврные данные" << endl;
}

Square::Square(const Square& a)
{
	h = a.h;
	l = a.l;
	PL = a.PL;
	PR = a.PR;
	cout << "конструктор копирования" << endl;
}

int Square::getPL()
{
	return PL;
}

int Square::getPR()
{
	return PR;
}

int Square::getL()
{
	return l;
}

int Square::getH()
{
	return h;
}

Square::~Square()
{
	cout << "вызван деструктор" << endl;
}

void Square::print()
{
	cout << "высота:" << h << endl << "ширина:" << l << endl << "площадь:" << PL << endl << "периметр:" << PR << endl;
}