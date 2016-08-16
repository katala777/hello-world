//limits.cpp -- ��������� ����������� ����� �����
#include <iostream>
#include <climits>

int main()
{
	setlocale(LC_ALL,"");
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	
	cout << "int is " << sizeof (int) << " байт." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	return 0;
}

