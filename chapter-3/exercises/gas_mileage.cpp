// gas_mileage.cpp - рассчитывает расход бензина
#include <iostream>

int main()
{
	using namespace std;
	int dist, gas;
	cout << "Enter the number of driven kilometers: ";
	cin >> dist;
	cout << "Enter the number of spent liters: ";
	cin >> gas;
	cout << "The gas mileage is " << float(gas) * 100 / dist << " liters per 100 kilometers";
	return 0;
}

