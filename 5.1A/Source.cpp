#include <iostream>
#include "Triangle.h"
#include <Windows.h>
#include "Triangle.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle A(3, 4);
	
		cout << A;
		++A;
		cout << A;
		--A;
		cout << A;
		A++;
		cout << A;
		A--;
		cout << A;
		cout << A.operator string();
		cout << endl;

		Triangle a;

		bool initResult;

		do
		{
			try
			{
				initResult = true;
				cin >> a;
			}
			catch (const char* str)
			{
				initResult = false;
				cerr << str << endl;
			}
			catch (bad_exception& e)
			{
				initResult = false;
				cerr << e.what() << endl;
			}
			catch (invalid_argument e)
			{
				initResult = false;
				cerr << e.what() << endl;
			}
		} while (!initResult);
		cout << a;
		++a;
		cout << a;
		--a;
		cout << a;
		a++;
		cout << a;
		a--;
		cout << a;
		cout << a.operator string();
		cout << endl;
		a.Cost();
		cout << endl;
		return 0;

	
}
