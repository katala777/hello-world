﻿// hexoct1.cpp -- показывает шестнадцатеричные и восьмиричные литералы
#include <iostream>

int main()
{
	using namespace std;
	int chest = 42;		// десятеричный целочисленный литерал
	int waist = 0x42;	// шестнадцатеричный целочисленный литерал
	int inseam = 042;	// восьмеричный целочисленный литерал
	
	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";
	return 0;
}

