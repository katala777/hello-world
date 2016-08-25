// time.cpp -- переводит секнуды в дни, часы, минуты и секунды
#include <iostream>

int main()
{
	using namespace std;
	const short Hours_per_days = 24;
	const short Mins_per_hour = 60;
	const short Secs_per_mins = 60;
	
	long long time;
	cout << "Enter the number of seconds: ";
	cin >> time;
	
	int days, hours, mins, secs;
	int temp;					// временная переменная для хранения остатков
	days = time / (Hours_per_days * Mins_per_hour * Secs_per_mins);
	temp = time % (Hours_per_days * Mins_per_hour * Secs_per_mins);
	hours = temp / (Mins_per_hour * Secs_per_mins);
	temp =  temp % (Mins_per_hour * Secs_per_mins);
	mins = temp / Secs_per_mins;
	secs = temp % Secs_per_mins;
	cout << time << " seconds = " << days << " days, "
		 << hours << " hours, " << mins << " minutes, "
		 << secs << " seconds";
	return 0;
}

