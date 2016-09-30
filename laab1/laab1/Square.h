#pragma once
class Square {
	int h;
	int l;
	int PL;
	int PR;
public:
	void newSquare(int, int);
	int getPR();
	int getPL();
	int getL();
	int getH();
	Square();
	Square(int, int);
	Square(const Square &);
	void setSize();
	~Square();
	void print();
};