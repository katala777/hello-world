//	population.cpp -- отображает процентное соотношение численности населения США и всего мира
#include <iostream>

int main()
{
	using namespace std;
	long long w_pop, us_pop;
	
	cout << "Enter the world's population: ";
	cin >> w_pop;
	cout << "Enter the population of the US: ";
	cin >> us_pop;
	cout << "The population of the US is " << float(us_pop) / w_pop * 100 << "% of the world population.";
	return 0;
}

