#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i;
	string S;
	cout << "Введите строку: ";
	getline(cin, S);
	for (i = 0; i < S.size(); i++) {
		if (isupper(S[i])) {
			S[i] = tolower(S[i]);
		};
	};
	cout << "Преобразованная строка: " << S;
}
