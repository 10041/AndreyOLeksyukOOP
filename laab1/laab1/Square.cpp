#include "stdafx.h"
#include <iostream>

using namespace std;
Square::Square()
{
	
	std::cout << "����� ������������ ��� ����������" << std::endl;
	h = 0;
	l = 0;
}

Square::Square(int a, int b)
{
	cout << "����� ������������ c �����������" << endl;
	if (a > 0 && b > 0)
	{
		h = a;
		l = b;
		PL = a * b;
		PR = 2 * (a + b);
		cout << "������:" << h << endl << "������:" << l << endl << "�������:" << PL << endl << "��������:" << PR << endl;

	}
	else
		cout << "������� ������" << endl;

}


void Square::setSize()
{
	int a, b;
	cout << "������:" << endl;
	cin >> a;
	cout << "������:" << endl;
	cin >> b;
	if (a > 0 && b > 0)
	{
		h = a;
		l = b;
		PL = a * b;
		PR = 2 * (a + b);
		cout << "�����:"  << endl << "�������:" << PL << endl << "��������:" << PR << endl;
	}
	else
		cout << "�������� ������" << endl;
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
		cout << "������� ������" << endl;
}

Square::Square(const Square& a)
{
	h = a.h;
	l = a.l;
	PL = a.PL;
	PR = a.PR;
	cout << "����������� �����������" << endl;
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
	cout << "������ ����������" << endl;
}

void Square::print()
{
	cout << "������:" << h << endl << "������:" << l << endl << "�������:" << PL << endl << "��������:" << PR << endl;
}