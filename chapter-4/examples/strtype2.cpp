﻿// strtype2.cpp -- присваивание, сложение, добавление
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string s1 = "penguin";
	string s2, s3;
	char c1[20] = "buzzard";
	
	// Присваивание одного объекта string другому
	cout << "You can assign one string object to another: s2 = s1\n";
	s2 = s1;
	cout << "s1: " << s1 << ", s2: " << s2 << endl;
	
	// Присваивание строки в стиле C объекту string
	cout << "You can assign a C-style string to a string object.\n";
	cout << "s2 = c1\n";
	s2 = c1;
	cout << "s2: " << s2 << endl;
	
	// Конкатенация строк
	cout << "You can concatenate strings: s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3: " << s3 << endl;
	
	// Добавление строки
	cout << "You can append string.\n";
	s1 += s2;
	cout << "s1 += s2 yields s1 = " << s1 << endl;
	s2 += " for a day";
	cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;
	return 0;
}

