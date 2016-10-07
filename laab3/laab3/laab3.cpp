// laab3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Tele.h"
#include <iostream>


int main()
{
	setlocale(LC_ALL, "rus");

	Film a;
	a.setHour(9);
	a.setProd(5);
	a.setFilm_name("Фильм 1");
	a.setReg_name("Pежисер фильма 1");
	a.getInfo();

	News b;
	b.setHour(10);
	b.setNews_name("Политические новости");
	b.getInfo();

	HudFilm c;
	c.setHour(11);
	c.setHudFilm_name("Художественный Фильм");
	c.setReg_name("режисер Художественный Фильм");
	c.setProd(10);
	c.getInfo();

	Mult d;
	d.setHour(12);
	d.setMult_name("Ежик в тумане");
	d.setReg_name("РЕЖИСЕР");
	d.setProd(5);
	d.getInfo();

	return 0;
}


