﻿//modulus.cpp -- использует операцию % для преобразования фунтов в стоуны
#include <iostream>

int main()
{
	using namespace std;
	const int Lbs_per_stn = 14;		// 1 стоун равен 14 фунтам
	int lbs;
	
	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn;	// количество целых стоунов
	int pounds = lbs % Lbs_per_stn;	// количество фунтов
	cout << lbs << " pounds are " << stone
		 << " stone, " << pounds << " pound(s)." << endl;
	return 0;
}

