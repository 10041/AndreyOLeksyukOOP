// lab5.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

int main()
{
	setlocale(LC_ALL, "");
	TeleProgramm T;

	Subject film("�����1997����", 1997, 10, 120);
	Subject Mult("����������2000����", 2000, 13, 60);
	Subject Reclam("�������", 2016, 14, 5);

	T.add(&film);
	T.add(&Mult);
	T.add(&Reclam);

	T.PrintList();
	std::cout << "-----------------------------------------" << std::endl;
	T.searchYear();
	std::cout << "-----------------------------------------" << std::endl;
	T.getAllProd();
	std::cout << "-----------------------------------------" << std::endl;
	T.extract("�������");
	T.PrintList();

    return 0;
}

