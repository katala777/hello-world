//bmi.cpp -- индекс массы тела (body mass index)
#include <iostream>

int main()
{
	using namespace std;
	const short Inch_per_foot = 12;			// 1 фут = 12 дюймов
	const float M_per_inch = 0.0254;		// 1 дюйм = 0.0254 метра
	const float Lbs_per_kg = 2.2;			// 1 кг = 2.2 фунта
	
	short inches, ft, lbs;
	cout << "Enter your height in ft and inches: ";
	cin >> ft;
	cin >> inches;
	cout << "Enter your weight in lbs: ";
	cin >> lbs;
	
	float height, weight;
	height = (ft * Inch_per_foot + inches)*M_per_inch;	// рост в метрах
	weight = lbs / Lbs_per_kg;							// вес в килограммах
	
	float bmi = weight / (height * height);
	cout << "\nYour bmi = " << bmi;
	return 0;
}

