// laab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Square.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	Square A1;
	A1.setSize();
	Square A2(4, 8);
	Square A3(A2);
	A3.print();
	Square arr[5];
	arr[0].newSquare(4, 4);
	arr[1].newSquare(4, 5);
	arr[2].newSquare(10, 7);
	arr[3].newSquare(1, 4);
	arr[4].newSquare(5, 5);
	int maxPR = 0, minPR = 99,
		maxPL = 0, minPL = 99;
	int Sq = 0, Rec = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i].getH() == arr[i].getL())
		{
			Sq++;
		}
		else
			Rec++;
		if (arr[i].getPR() > maxPR)
		{
			maxPR = arr[i].getPR();
		}
		if (arr[i].getPR() < minPR)
		{
			minPR = arr[i].getPR();
		}
		if (arr[i].getPL() > maxPL)
		{
			maxPL = arr[i].getPL();
		}
		if (arr[i].getPL() < minPL)
		{
			minPL = arr[i].getPL();
		}
	}
	cout << "максимальная площадь: " << maxPL << "\tминимальная площадь: " << minPL << endl << "максимальный периметр: " << maxPR << "\tминимальный периметр: " << minPR << endl
		<< "кол-во квадратов: " << Sq << "\tкол-во прямоугольников: "<< Rec << endl;
    return 0;
}

