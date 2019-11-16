#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int k, i;
	k = 0;
	string S;
	cout << "Введите строку: ";
	getline(cin, S);
	for (i = 0; i < S.size(); i++) {
		if (S[i] == ' ') {
			k++;
		};
	};
	cout << "Длина строки: " << S.size() - k;
}