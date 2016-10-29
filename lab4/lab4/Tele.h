#pragma once
#include <iostream>
class TeleProgramm {
	int hour;
	const int day = 24;
	mutable int ch = 0;
	static int counter;
public:
	class newsclass {
	public:
		static int key;
	public:
		newsclass()
		{
			std::cout << "конструктор вложенного класса" << std::endl;
			LAget();
		}
	};

	void la()
	{
		std::cout << "проверка поля внутреннего класса: " << newsclass::key << std::endl;
	}

	static void getCounter() 
	{
		std::cout << "Count of TeleProgramm: " << counter << std::endl;
	}

	TeleProgramm();
	TeleProgramm(int a);
	void setHour(int hour);
	void getHour() const;
	static void LAget() 
	{
		std::cout << "Метод внешнего класса" << std::endl;
	}
	~TeleProgramm();
};

class Reg {
	char *Reg_name;
public:
	Reg();
	Reg(char *m)
	{
		Reg_name = m;
		std::cout << "конструктор режиссера с параметром" << std::endl;
	}
	void setReg_name(char* name);
	void getReg_name() const;
	~Reg();
};

class Reclam {
	int prod;
public:
	Reclam();
	void setProd(int  a);
	void getProd();
	~Reclam();
};

class Film : public TeleProgramm, public Reg, public Reclam {
	char* Film_name;
public:
	Film();
	void setFilm_name(char *name);
	void getFilm_name();
	void getInfo()
	{
		TeleProgramm::getHour();
		Reg::getReg_name();
		Reclam::getProd();
		getFilm_name();
	}

	~Film();
};

class News : public TeleProgramm {
	char* News_name;
public:
	News();
	News(int x) :TeleProgramm(x) { News_name = NULL; std::cout << "конструктор с параметром из базового класса" << std::endl; }
	void setNews_name(char *name);
	void getNews_name();
	~News();
	void getInfo()
	{
		TeleProgramm::getHour();
		getNews_name();
	}
};
////////////////////////////////////////////////////////////////////////////////////
class PromProgramm : public Reclam, public News {
	int n;
public:
	PromProgramm() 
	{ 
		n = 0;
		std::cout << "конструктор промежуточных программ" << std::endl; 
	}
	PromProgramm(int x) 
	{
		n = x;
		std::cout << "конструктор промежуточных программ \nn = "<< n << std::endl;
	}
	void getN()
	{
		std::cout << "n = " << n << std::endl;
	}
protected:
	void setN(int x)
	{
		n = x;
	}
};

class PromProgramm1 : protected PromProgramm {
protected:
	int Prn;
	void getPrn()
	{
		std::cout << "Prn = " << Prn << std::endl;
	}
public:
	int Pun;
	PromProgramm1() {}
	PromProgramm1(int x, int y) 
	{
		Prn = x;
		Pun = y;
		std::cout << "конструктор промежуточных программ(1) \nPrn = "<< Prn <<"\nPun = "<< Pun << std::endl;
	}
	
	void getPun()
	{
		std::cout << "Pun = " << Pun << std::endl;
	}

	void setPrnPun(int x, int y)
	{
		Prn = x;
		Pun = y;
	}

	void getInfo()
	{
		getPrn();
		getPun();
		getN();
	}
};

class PromProgramm2 : public PromProgramm1 {
public:
	PromProgramm2(int a, int b, int c)
	{
		setN(a);
		setPrnPun(b, c);
	}
	void getInfo()
	{
		getPun();
		getPrn();
		getN();
	}
};
/////////////////////////////////////////////////////////////////////////////////
class base {
	virtual void getInfo() = 0;
};

class A : public base {
protected:
	int a = 10;
public:
	void getInfo() override
	{
		std::cout << "A: " << a << std::endl;
	}
};

class B : public base {
protected:
	int b = 20;
public:
	void getInfo() override
	{
		std::cout << "B: " << b << std::endl;
	}
};

class AB : public A, public B {
	char* ab = "name AB";
public:
	void getInfo() override
	{
		std::cout << "AB: " << ab << std::endl;
		std::cout << "A: " << a << std::endl;
		std::cout << "B: " << b << std::endl;

	}
};


////////////////////////////////////////////////////////////////////////////////////
class HudFilm : public TeleProgramm, public Reg, public Reclam {
	char* HudFilm_name;
public:
	HudFilm();
	void setHudFilm_name(char *name);
	void getHudFilm_name();
	~HudFilm();
	void getInfo()
	{
		TeleProgramm::getHour();
		Reg::getReg_name();
		getHudFilm_name();
		Reclam::getProd();
	}
};

class printer {
public:
	void iAmPrint(HudFilm* obj)
	{
		std::cout << typeid(obj).name() << std::endl;
	}
};



class Mult{
	char* Mult_name;
	int time;
public:
	/*friend void changeTime(Mult&);*/
	Mult();
	void setMult(char *name, int t)
	{
		Mult_name = name;
		time = t;
	}
	void getMult_name()
	{
		std::cout << "название мультика: " << Mult_name << std::endl;
	}
	void getAllMult() { std::cout << "время мультика: " << time << std::endl;
						std::cout << "название мультика: " << Mult_name << std::endl;};
	~Mult();

	friend class Farb;

	void getMult()
	{
		getMult_name();

	}

};


class Farb {
public:

	int iKhoiKnowAll(Mult& obj)
	{
		return obj.time;
	}
	void changeTime(Mult& obj)
	{
		obj.time++;
	};
};


