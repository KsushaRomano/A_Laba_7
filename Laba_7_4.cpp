#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k, i, j, g;
	k = 0;
	j = 0;
	string S1, S2;
	cout << "Введите строку: ";
	getline(cin, S1);
	for (i = 0; i < S1.size(); i++) {
		if (S1[i] == ' ') {
			k++;
		};
	};
	g = S1.size() - k;
	S2.resize(g, '0');
	for (i = 0; i < S1.size(); i++) {
		if (S1[i] != ' ') {
			S2[j] = tolower(S1[i]);
			j++;
		};
	};
	for (i = 0; i < S2.size() / 2; i++) {
		if (S2[i] != S2[S2.size() - i - 1]) {
			cout << "Строка не является перевёртышем";
			return 0;
		};
	};
	cout << "Строка является перевёртышем";
}