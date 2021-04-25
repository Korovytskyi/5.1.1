#pragma once
#include <iostream>

using namespace std;

class Exception : public exception
{
	string message;
public:
	Exception(const string& s) : message(s) { }
	string What() const { return message; }
};
