#pragma once

class Subject
{
	char *name;	//наименование
	int year;	//год выхода
	int hour;	//время начала
	int prod;	//продолжительность мин
public:
	Subject* Prev;
	Subject* Next;
	Subject() : name(nullptr), year(0), hour(0), prod(0) {};
	Subject(char*, int, int, int);
	void setName(char*);
	void setYear(int);
	void setProd(int);
	void setHour(int);
	void getInfo() ;
	char* getName() const;
	int getYear();
	int getProd() const;
	int getHour() const;
};

class TeleProgramm {
	int size;
	Subject* head;
	Subject* tail;
public:
	TeleProgramm() :size(0) { head = nullptr; tail = nullptr; }
	void add(Subject*);
	void extract(char*);
	Subject* getFirst() const; 
	Subject* getLast() const;
	void getSize();
	void searchYear();
	void getAllProd() const;
	void PrintList();
	
};