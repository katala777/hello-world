// eur_to_us.cpp -- запрашивает расход топлива в европейском стиле и преобразует его в стиль США
#include <iostream>

int main()
{
	using namespace std;
	const float Miles_per_100km = 62.14;
	const float Liters_per_gal = 3.875;
	
	double us_gm, eur_gm;
	cout << "Enter gas mileage in European style (liters per 100km): ";
	cin >> eur_gm;
	us_gm = (1 / eur_gm) * Miles_per_100km * Liters_per_gal;
	cout << eur_gm << " liters per 100km = " << us_gm << " miles per gallon (US style).";
	return 0;
}

