//convert.cpp -- convert furlongs into yards
#include <iostream>

int main()
{
	using namespace std;
	int distance;
	cout << "Enter distance in furlongs: ";
	cin >> distance;
	cout << distance << " furlongs = " << 220*distance << " yards";
	return 0;
}

