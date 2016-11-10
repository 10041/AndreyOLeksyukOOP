#pragma once
#include <iostream>
template <class type> class array
{
	int size;
	type *arr;
	template <class type> friend type min(array<type>& array);
public:
//////////////////////////////////////////////////////////
	int getSize()
	{
		return size;
	}
//////////////////////////////////////////////////////////
	array(int n, type el, ...)
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
//////////////////////////////////////////////////////////
	array(const array & x)
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
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << "  ";
		}
		std::cout << std::endl;
	}
//////////////////////////////////////////////////////////
	array &operator* (const array& M)
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
	bool operator < (array &M)
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

