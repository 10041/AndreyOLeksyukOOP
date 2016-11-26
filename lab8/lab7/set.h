#pragma once
#include <iostream>
//#define NDEBUG
#include <assert.h>
using std::endl;
using std::cout;

class Err
{
	char* name;
	char* hear;
	
	
public:
	Err() { name = NULL; hear = NULL; };
	void setErr(char* n, char* h)
	{
		name = n;
		hear = h;
	}
	void print()
	{
		cout << "Ошибка: " << name << endl;
		cout << "Место: " << hear << endl;
	}
};

Err a;

template <class type> class Array : public Err
{
	int size;
	type *arr;
	template <class type> friend type min(Array<type>& Array);
public:
//////////////////////////////////////////////////////////
	Array() { size = 0; };
//////////////////////////////////////////////////////////
	int getSize()
	{
		assert(size != 0);
		return size;
	}
//////////////////////////////////////////////////////////
	Array(int n, type el, ...)
	{
		if (n < 1)
		{
			a.setErr("число элементов множества задано неправильно", "конструктор множества");
			throw a;
		}
		else
		{
			type *temp;
			arr = new type[n];
			temp = &el;
			size = n;
			for (int i = 0; i < n; i++)
			{
				arr[i] = *temp;
				temp++;
			}
		}
		
	}
//////////////////////////////////////////////////////////
	Array(const Array & x)
	{
		size = x.size;
		arr = new type[x.size];
		for (int i = 0; i < x.size; i++)
		{
			arr[i] = x.arr[i];
		}
	}
//////////////////////////////////////////////////////////
	void add(type el)
	{
		size++;
		arr[size] = el;
	}
//////////////////////////////////////////////////////////
	void print()
	{
		if (size < 1)
		{
			a.setErr("попытка вывести пустое множество", "Array print");
			throw a;
		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				std::cout << arr[i] << "  ";
			}
			std::cout << std::endl;
		}
	}
//////////////////////////////////////////////////////////
	Array &operator* (const Array& M)
	{
		int count = (size + M.size);
		type *p = new type[count];
		int t = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < M.size; j++)
			{
				if (arr[i] == M.arr[j])
				{
					p[t] = M.arr[j];
					t++;
				}
			}
		}
		for (int i = 0; i < t; i++)
		{
			arr[i] = p[i];
		}
		size = t;
		delete[] p;
		return *this;
	}
//////////////////////////////////////////////////////////
	operator int() const { return size; }
//////////////////////////////////////////////////////////
	bool operator < (Array &M)
	{
		int t = 0;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < M.size; j++)
			{
				if (arr[i] == M.arr[j])
				{
					t++;
				}
			}
		}
		if (t == M.size)
			return true;
		else
			return false;
	}
//////////////////////////////////////////////////////////
	bool operator > (type el)
	{

		for (int i = 0; i < size; i++)
		{
 			if (arr[i] = el)
			{
				return true;
			}
		}
		return false;
	}
//////////////////////////////////////////////////////////
	int operator [] (int i) { return arr[i - 1]; }
};

