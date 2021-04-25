#include "Triangle.h"
#include <sstream>
#include <Windows.h>
#include "Exception.h"
Triangle::Triangle()
{
	first = 0;
	second = 0;
}
Triangle::Triangle(int f, int s)
{
	first = f;
	second = s;

	if (s == 0)
		throw Exception(" Error MyException ");

	if (s == -1)
		throw bad_exception();

	bad_exception* t = new bad_exception;
	if (s < 0)
		throw t;
	second = s;
}
Triangle::Triangle(const Triangle& R)
{
	first = R.first;
	second = R.second;
}
void Triangle::Setfirst(int f)
{
	first = f;
}
void Triangle::Setsecond(int s)
{
	second = s;
}
int Triangle::Getfirst() const
{
	return first;
}
int Triangle::Getsecond() const
{
	return second;
}

Triangle& Triangle::operator = (const Triangle& R)
{
	first = R.first;
	second = R.second;

	return *this;
}
Triangle::operator string() const
{
	stringstream sout;

	sout << "Liternuy radok" << endl;
	sout << "first = " << first << endl;
	sout << "second = " << second << endl;

	return sout.str();
}
ostream& operator <<(ostream& out, const Triangle& R)
{

	out << "Znachena" << endl;
	out << "first = " << R.first << endl;
	out << "second = " << R.second << endl;

	return out;
}
istream& operator >>(istream& in, Triangle& R)
{
	do {
		cout << "Vedit znachena" << endl;
		cout << "first = "; in >> R.first;
		cout << "second = "; in >> R.second;
		if (R.second < 0)
			cerr << " Error 1" << endl;
	} while (R.second < 0);
	cout << endl;
	return in;
}

Triangle& Triangle::operator ++()
{
	++first;
	return *this;
}
Triangle& Triangle::operator --()
{
	--first;
	return *this;
}
Triangle Triangle::operator++(int)
{
	Triangle a(*this);
	second++;
	return a;
}
Triangle Triangle::operator --(int)
{
	Triangle a(*this);
	second--;;
	return a;
}
int Triangle::Cost()
{

	double F = sqrt((first * first) + (second * second));
	cout << "================================================================" << endl;
	cout << "hypotenuse = " << F << endl;
	cout << "================================================================" << endl;
	return F;
}

