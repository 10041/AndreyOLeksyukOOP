// lab6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "set.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "rus");
	array a(5, 1, 2, 3, 4, 5);
	array b(3, 1, 2, 3);
	array c(4, 4, 5, 6, 7);
	a.print();
	b.print();
	c.print();
	cout << "мощность мн-ва \"a\" " << (int)a << endl;
	cout << "элемент 4 мн-ва \"a\" " << a[4] << endl;
	bool r = false;
	r = b > 3;
	cout << "принадлежность эл-та 3  \"b\" = " << r << endl;
	bool t = false;
	t = a < b;
	cout << "является b подмножеством a  " << r << endl;
	a*c;
	cout << "пересечение a и c = "; a.print();
	cout << endl;
    return 0;
}

