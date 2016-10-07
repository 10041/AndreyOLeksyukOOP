#pragma once
class TeleProgramm {
	int hour;
public:
	TeleProgramm();
	void setHour(int hour);
	void getHour();
	~TeleProgramm();
};

class Reg {
	char *Reg_name;
public:
	Reg();
	void setReg_name(char* name);
	void getReg_name();
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
	void setNews_name(char *name);
	void getNews_name();
	~News();
	void getInfo()
	{
		TeleProgramm::getHour();
		getNews_name();
	}
};

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

class Mult : public TeleProgramm, public Reg, public Reclam {
	char* Mult_name;
public:
	Mult();
	void setMult_name(char *name);
	void getMult_name();
	~Mult();
	void getInfo()
	{
		TeleProgramm::getHour();
		Reg::getReg_name();
		getMult_name();
		Reclam::getProd();
	}

};


