//time.cpp -- write time
#include <iostream>
using namespace std;
void time(int h, int m);

int main()
{
	int hours;
	int min;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> min;
	time(hours, min);
	return 0;
}

void time(int h, int m)
{
	cout << "Time: " << h << ":" << m;
}
