// lab5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int main()
{
	setlocale(LC_ALL, "");
	TeleProgramm T;

	Subject film("Фильм1997года", 1997, 10, 120);
	Subject Mult("Мультфильм2000года", 2000, 13, 60);
	Subject Reclam("Шампунь", 2016, 14, 5);

	T.add(&film);
	T.add(&Mult);
	T.add(&Reclam);

	T.PrintList();
	std::cout << "-----------------------------------------" << std::endl;
	T.searchYear();
	std::cout << "-----------------------------------------" << std::endl;
	T.getAllProd();
	std::cout << "-----------------------------------------" << std::endl;
	T.extract("Шампунь");
	T.PrintList();

    return 0;
}

