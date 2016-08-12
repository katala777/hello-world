//temperature.cpp -- convert Celsius into Fahrenheit
#include <iostream>

int CtoF(int);

int main()
{
	using namespace std;
	int t;
	cout << "Enter a Celsius value: ";
	cin >> t;
	cout << t << " degrees Celsius is " << CtoF(t) << " degrees Fahrenheit";
	return 0;
}

int CtoF(int t)
{
	return 1.8 * t + 32;
}
