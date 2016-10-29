#include "stdafx.h"

using namespace std;

Subject::Subject(char* n, int y, int h, int pr)
{
	name = n;
	year = y;
	hour = h;
	prod = pr;
}

void Subject::setName(char* n)
{
	name = n;
}

void Subject::setProd(int pr)
{
	prod = pr;
}

void Subject::setYear(int y)
{
	year = y;
}

void Subject::setHour(int h)
{
	hour = h;
}

void Subject::getInfo()
{
	cout << endl;
	cout << "имя программы: " << name << endl;
	cout << "год выхода: " << year << endl;
	cout << "время показа: " << hour << endl;
	cout << "продолжительность: " << prod << endl;
}

char* Subject::getName() const
{
	return name;
}

int Subject::getHour() const
{
	return hour;
}

int Subject::getProd() const
{
	return prod;
}

int Subject::getYear()
{
	return year;
}


/////////////////////////////////////////////


void TeleProgramm::add(Subject* s)
{
	if (tail)
	{
		tail->Next = s;
		s->Prev = tail;
		tail = s;
		s->Next = head;
		head->Prev = s;
		size++;
	}
	else
	{
		tail = head = s;
		s->Next = head;
		s->Prev = tail;
		size++;
	}
}

void TeleProgramm::extract(char* n)
{
	if (head)
	{
		Subject* temp = head;
		for (int i = 0; i < size; i++)
		{
			if (strcmp(temp->getName(), n) == 0)
			{
				if (size == 1)
				{
					temp = head;	head = nullptr;	tail = nullptr;
					delete temp;	this->size--;		break;
				}
				else
				{
					temp->Next->Prev = temp->Prev;
					temp->Prev->Next = temp->Next;
					head = temp->Next;	this->size--;
					break;
				}
			}
			temp = temp->Next;
		}
	}
	else
	{
		cout << "Нет передач!" << endl;
	}
}

Subject* TeleProgramm::getFirst() const
{
	if (head)
	{
		return head;
	}
	else
	{
		cout << "нет телепрограмм!" << endl;
		return nullptr;
	}
}

Subject* TeleProgramm::getLast() const
{
	if (tail)
	{
		return tail;
	}
	else
	{
		cout << "нет телепрограмм!" << endl;
		return nullptr;
	}
}

void TeleProgramm::getSize()
{
	cout << "кол-во программ: " << size << endl;
}

void TeleProgramm::searchYear()
{
	if (head == NULL)
	{
		cout << "нет телепрограмм!" << endl;
	}
	else
	{
		cout << "введите год выпуска: " << endl;
		int g = 0, count = 0;
		cin >> g;
		Subject *p = head;
		for (int i = 0; i < size; i++)
		{
			if (g == p->getYear())
			{
				cout << "----------------------------------------------------" << endl;
				p->getInfo();
				count++;
			}
			p = p->Next;
		}
		if (count == 0)
		{
			cout << "ничего не найдено!" << endl;
		}
	}
}

void TeleProgramm::getAllProd() const
{
	if (head)
	{
		Subject *p = head;
		int ch = 0;
		for (int i = 0; i < size; i++)
		{
			ch += p->getProd();
			p = p->Next;
		}
		cout << "продолжительность всех телепрограмм: " << ch << endl;
	}
	else
	{
		cout << "нет телепрограмм!" << endl;
	}
}

void TeleProgramm::PrintList()
{
	Subject* p = head;
	for (int i = 0; i < size; i++)
	{
		p->getInfo();
		p = p->Next;
	}
}