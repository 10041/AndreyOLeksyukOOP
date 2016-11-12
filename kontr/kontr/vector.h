#pragma once

#include <iostream>
#define VectorMax 10 //размер массива по умолчанию

class vector
{
	int size; //размер вектора
	int *arr; //массив элементов
public:
	vector() : size(0), arr(nullptr) { arr = new int[VectorMax]; }; // конструктор без параметров
	vector(int, int, ...); //конструктор с переменным числом параметров(первый параметр размер, а остальные сами элементы)
	void add(int); //метод добавления элемента
	void print(); //метод вывода в консоль
	void mul(int); // метод умножения вектора на число
	
};


vector::vector(int n, int el, ...) 
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

void vector::add(int el)
{
	if(size > 10)
	{
		std::cout << "размер вектора превышен!" << std::endl;
	}
	else
	{
		arr[size] = el;
		size++;
	}
	
}

void vector::print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void vector::mul(int n)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] *= n;
	}
}
