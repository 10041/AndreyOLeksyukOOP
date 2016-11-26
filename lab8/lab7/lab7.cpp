// lab7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "set.h"
#include <iostream>

using std::cout;
using std::endl;
template <class type> type min(Array<type>& Array)
{//6 20 26
	//10 23 25
	type m = Array.arr[0];
	for (int i = 0; i < Array.getSize(); i++)
	{
		if (Array.arr[i] < m)
		{
			m = Array.arr[i];
		}
	}
	cout << "минимальное значение множества " << typeid(Array).name() << " = " << m << endl;
	return m;
}

int main()
{
	setlocale(LC_ALL, "rus");

	try
	{
	/*	Array<int> a(5, 1, 2, 3, 5, 6);
		Array<int> b(3, 1, 2, 3);
		Array<int> c(5, 4, 5, 6, 7, 1);
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
		Array<double> d(5, 1.55, 2.6, 3.9, 4.975, 5.0012);
		d.print();
		min<int>(c);
		min<double>(d);*/

		/*Array<int> a(0, 4, 7, 5);
*/
		Array<int> b;
		b.getSize();
		b.print();
	}

	catch(Err& obg)
	{
		obg.print();
	}

	
	return 0;
}

