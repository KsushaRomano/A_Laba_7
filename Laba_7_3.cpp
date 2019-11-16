#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int k, i;
	string S1, S2;
	cout << "Введите первую строку: ";
	getline(cin, S1);
	cout << "Введите вторую строку: ";
	getline(cin, S2);
	if (S1.size() == S2.size()) {
		for (i = 0; i < S1.size(); i++) {
			if (tolower(S1[i]) != tolower(S2[i])) {
				cout << "no";
				return 0;
			};
		};
		cout << "yes";
	}
	else {
		cout << "no";
	};
}