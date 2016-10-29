#include "stdafx.h"
#include <iostream>

#include "Tele.h"

using namespace std;

TeleProgramm::TeleProgramm()
{
	hour = 0;
	cout << "конструктор телепрограммы" << endl;
}

TeleProgramm::TeleProgramm(int a)
{
	hour = a;
	cout << "конструктор с параметрами телепрограммы" << endl;
}

TeleProgramm::~TeleProgramm()
{
	cout << "деструктор телепрограммы" << endl;
}

void TeleProgramm::setHour(int Hour)
{
	hour = Hour;
}

void TeleProgramm::getHour()
{
	cout << "врем€ начала: " << hour << "ч." << endl;
}

Reg::Reg()
{
	Reg_name = NULL;
	cout << "конструктор режиссера" << endl;
}

Reg::~Reg()
{
	cout << "деструктор режиссера" << endl;
}

void Reg::setReg_name(char* Name)
{
	Reg_name = Name;
}

void Reg::getReg_name()
{
	cout << "»м€ режисера: " << Reg_name << endl;
}

Film::Film()
{
	Film_name = NULL;
	cout << "конструктор фильма" << endl;
}

Film::~Film()
{
	cout << "деструктор фильма" << endl;
}

void Film::setFilm_name(char* name)
{
	Film_name = name;
}

void Film::getFilm_name()
{
	cout << "название фильма: " << Film_name << endl;
}



News::News()
{
	TeleProgramm();
	News_name = NULL;
	cout << "конструктор новостей" << endl;
}

News::~News()
{
	cout << "деструктор фльма" << endl;
}

void News::getNews_name()
{
	cout << "Ќазвание новостей: " << News_name << endl;
}

void News::setNews_name(char* name)
{
	News_name = name;
}

HudFilm::HudFilm()
{
	HudFilm_name = NULL;
	cout << "конструктор худ. фильма" << endl;
}

HudFilm::~HudFilm()
{
	cout << "деструктор худ. фильма" << endl;
}

void HudFilm::setHudFilm_name(char* name)
{
	HudFilm_name = name;
}

void HudFilm::getHudFilm_name()
{
	cout << "название худ. фильма: " << HudFilm_name << endl;
}

Mult::Mult()
{
	Mult_name = NULL;
	cout << "конструктор мультика" << endl;
}

Mult::~Mult()
{
	cout << "деструктор мультика" << endl;
}

void Mult::getMult_name()
{
	cout << "название мультика: " << Mult_name << endl;
}

void Mult::setMult_name(char* name)
{
	Mult_name = name;
}

Reclam::Reclam()
{
	prod = 0;
	cout << "конструктор рекламы" << endl;
}

Reclam::~Reclam()
{
	cout << "деструктор рекламы" << endl;
}

void Reclam::setProd(int a)
{
	prod = a;
}

void Reclam::getProd()
{
	cout << "продолжительность рекламы: " << prod << " мин." << endl;
}