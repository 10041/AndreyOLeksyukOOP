// lab6.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "�������� ��-�� \"a\" " << (int)a << endl;
	cout << "������� 4 ��-�� \"a\" " << a[4] << endl;
	bool r = false;
	r = b > 3;
	cout << "�������������� ��-�� 3  \"b\" = " << r << endl;
	bool t = false;
	t = a < b;
	cout << "�������� b ������������� a  " << r << endl;
	a*c;
	cout << "����������� a � c = "; a.print();
	cout << endl;
    return 0;
}

