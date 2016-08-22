// fltadd.cpp -- потеря точности при работе с float
#include <iostream>

int main()
{
	using namespace std;
	float a = 2.34e22;
	float b = a + 1;
	
	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;
	return 0;
}

