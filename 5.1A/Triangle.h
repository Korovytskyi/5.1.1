#pragma once
#include <iostream>
#include <string>

using namespace std;

class Triangle {
private:
	double first;
	int second;
public:
	Triangle();
	Triangle(int, int);
	Triangle(const Triangle&);

	void Setfirst(int);
	void Setsecond(int);
	int Getfirst() const;
	int Getsecond() const;

	Triangle& operator = (const Triangle&);
	operator string() const;

	friend ostream& operator<<(ostream&, const Triangle&);
	friend istream& operator>>(istream&, Triangle&);

	Triangle& operator ++();
	Triangle& operator --();

	Triangle operator ++(int);
	Triangle operator--(int);

	int Cost();

};
