// init_ptr.cpp -- инициализация указателя
#include <iostream>

int main()
{
	using namespace std;
	int higgens = 5;
	int *pt = &higgens;
	
	cout << "Value of higgens = " << higgens
		 << "; Addrress of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt
		 << "; Value of pt = " << pt << endl;
	return 0;
}

