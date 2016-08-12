//spacedistance.cpp -- convert light years into astronomical units
#include <iostream>

double converter(double);

int main()
{
	using namespace std;
	double distance;
	cout << "Enter the number of light years: ";
	cin >> distance;
	cout << distance << " light years = " << converter(distance) << " astronomical units";
	return 0;
}

double converter(double d)
{
	return 63240*d;
}

