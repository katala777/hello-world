// height.cpp - преобразует рост в дюймах в футы и дюймы
#include <iostream>

int main()
{
	using namespace std;
	const short Inch_per_foot = 12;			// 1 фут = 12 дюймов
	short height;
	cout << "Enter height in inches:__\b\b";
	cin >> height;
	short ft = height / Inch_per_foot;		// футы
	short inches = height % Inch_per_foot;	// дюймы
	cout << "\n" << height << " inches = " <<  ft << " ft " << inches << " inch(es)."; 
	return 0;
}

