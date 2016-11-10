#pragma once
#include <iostream>
class array
{
	int size;
	int *arr;
public:
	array() : size(), arr(nullptr) {};
	array(int);
	array(int, int, ...);
	array(const array &);
	void add(int);
	void print();
	array &operator* (const array&);				//пересечение множеств
	operator int() const { return size; }			//мощность мн-ва
	bool operator < (array &arr);					//поиск подстроки
	bool operator > (int);							//проверка на принадлежность
	int operator [] (int i) { return arr[i-1]; }		//получение элемента
};

array::array(int x)
{
	size = x;
	arr = new int[x];
}

array::array(const array& x)
{
	size = x.size;
	arr = new int[x.size];
	for(int i = 0; i < x.size; i++)
	{
		arr[i] = x.arr[i];
	}
}

array::array(int n, int el, ...)
{
	int *temp;
	arr = new int[n];
	temp = &el;
	size = n;
	for (int i = 0; i < n; i++)
	{
		arr[i] = *temp;
		temp++;
	}
}

void array::add(int el)
{
	size++;
	arr[size] = el;
}

void array::print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

array& array::operator* (const array& M)
{
	int count = (size + M.size);
	int *p = new int[count];
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

bool array::operator > (int el)
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

bool array::operator < (array& M)
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


