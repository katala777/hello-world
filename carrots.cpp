// carrots.cpp -- программа по технологии потребления пищевых продуктов
// использует и отображает переменную
#include <iostream>

int main()
{
	using namespace std;
	int carrots;
	carrots = 25;
	cout << "I have ";
	cout << carrots;
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have " << carrots << " carrots. " << endl;
	return 0;
}

