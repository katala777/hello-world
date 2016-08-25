// latitude.cpp -- отображает широту (latitude), данную в градусах, минутах и секундах, в десятичном формате
#include <iostream>

int main()
{
	using namespace std;
	const short Min_per_deg = 60;
	const short Sec_per_min = 60;
	
	short degrees, mins, secs;
	cout << "Enter a latitude in degrees, minutes and seconds:\n";
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> mins;
	cout << "Finally, enter the seconds of arc: ";
	cin >> secs;
	
	float decimal;		// широта в десятичном формате
	decimal = degrees + float(mins) / Min_per_deg + float(secs) / (Min_per_deg * Sec_per_min);
	cout << degrees << " degrees, " << mins << " minutes, " 
		 << secs << " seconds = " << decimal << " degrees";
	return 0;
}

