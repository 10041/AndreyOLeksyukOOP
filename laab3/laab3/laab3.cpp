// laab3.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	a.setFilm_name("����� 1");
	a.setReg_name("P������ ������ 1");
	a.getInfo();

	News b;
	b.setHour(10);
	b.setNews_name("������������ �������");
	b.getInfo();

	HudFilm c;
	c.setHour(11);
	c.setHudFilm_name("�������������� �����");
	c.setReg_name("������� �������������� �����");
	c.setProd(10);
	c.getInfo();

	Mult d;
	d.setHour(12);
	d.setMult_name("���� � ������");
	d.setReg_name("�������");
	d.setProd(5);
	d.getInfo();

	return 0;
}


