// lab7.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "set.h"
#include <iostream>

using std::cout;
using std::endl;
template <class type> type min(array<type>& array)
{
	type m = array.arr[0];
	for (int i = 0; i < array.getSize(); i++)
	{
		if (array.arr[i] < m)
		{
			m = array.arr[i];
		}
	}
	cout << "����������� �������� ��������� " << typeid(array).name() << " = " << m << endl;
	return m;
}

int main()
{
	setlocale(LC_ALL, "rus");

	array<int> a(5, 1, 2, 3, 4, 5);
	array<int> b(3, 1, 2, 3);
	array<int> c(5, 4, 5, 6, 7, 1);
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
	array<double> d(5, 1.55, 2.6, 3.9, 4.975, 5.0012);
	d.print();
	min<int>(c);
	min<double>(d);
	return 0;
}

