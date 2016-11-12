// kontr.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "vector.h"

int main()
{
	setlocale(LC_ALL, "rus");
	vector a(4, 10, 11, 12, 13);
	vector b;
	b.add(5);
	b.add(4); 
	b.add(3);

	a.print();
	b.print();
	
	a.mul(10);
	b.mul(10);

	a.print();
	b.print();

    return 0;
}

