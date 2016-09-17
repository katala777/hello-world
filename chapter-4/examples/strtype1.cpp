// strtype1.cpp -- использование класса C++ string
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "juguar";
	string str1;
	string str2 = "panther";
	
	cout << "Enter a kind of feline: ";			// Введите животное из семейства кошачьих
	cin >> charr1;
	cout << "Enter another kind of feline: ";	// Введите другое животное из семейства кошачьих
	cin >> str1;
	cout << "Here are some felines:\n";
	cout << charr1 << ", " << charr2 << ", "
		<< str1 << ", " << str2 << endl;
	cout << "The third letter in " << charr2 << " is "
		<< charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl;
	return 0;
}

