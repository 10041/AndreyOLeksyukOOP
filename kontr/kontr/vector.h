#pragma once

#include <iostream>
#define VectorMax 10 //������ ������� �� ���������

class vector
{
	int size; //������ �������
	int *arr; //������ ���������
public:
	vector() : size(0), arr(nullptr) { arr = new int[VectorMax]; }; // ����������� ��� ����������
	vector(int, int, ...); //����������� � ���������� ������ ����������(������ �������� ������, � ��������� ���� ��������)
	void add(int); //����� ���������� ��������
	void print(); //����� ������ � �������
	void mul(int); // ����� ��������� ������� �� �����
	
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
		std::cout << "������ ������� ��������!" << std::endl;
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
