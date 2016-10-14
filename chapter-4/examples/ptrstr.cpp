// ptrstr.cpp -- использование указателей на строки
#include <iostream>
#include <cstring>	// объявление strlen(), strcpy()

int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char *bird = "wren";
	char *ps;
	cout << animal << " and ";
	cout << bird << "\n";
	// cout << ps << "\n";			// может отобразить мусор, но может вызвать и аварийное завершение программы
	
	cout << "Enter a kind of animal: ";
	cin >> animal;					// нормально, если вводится меньше 20 символов
	// cin >> ps; очень опасная ошибка, чтобы пробовать;
	// ps не указывает на выделенное пространство
	
	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy(): \n";
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy(): \n";
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	delete [] ps;
	return 0;
}

