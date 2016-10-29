// lab4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
int TeleProgramm::counter = 0;
int TeleProgramm::newsclass::key = 999;
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	
	TeleProgramm::newsclass b;
	TeleProgramm la;
	la.la();
	std::cout << "---------------------------------------------------" << std::endl;
	B bb; A aa; AB aabb;
	aa.getInfo();
	bb.getInfo();
	aabb.getInfo();

	std::cout << "---------------------------------------------------" << std::endl;
	News m(10);
	m.setNews_name("News 1");
	m.getInfo();
	std::cout << "---------------------------------------------------" << std::endl;
	News n(9);
	n.setNews_name("News 2");
	n.getHour();
	n.getHour();
	n.getHour();
	std::cout << "---------------------------------------------------" << std::endl;
	PromProgramm2 d(10, 9, 8);
	d.getInfo();
	TeleProgramm::getCounter();
	std::cout << "---------------------------------------------------" << std::endl;
	Mult c;
	c.setMult("Mult", 2);
	c.getAllMult();
	Farb cc;
	std::cout << "time: " << cc.iKhoiKnowAll(c) << std::endl;
	cc.changeTime(c);
	c.getAllMult();
	std::cout << "---------------------------------------------------" << std::endl;
	
	HudFilm *some = new HudFilm();
	printer allude;
	allude.iAmPrint(some);

	std::cout << "---------------------------------------------------" << std::endl;
	const char *str = "hello";
	char *str1 = const_cast<char*>(str);
	std::cout << *str1 << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	return 0;
}

