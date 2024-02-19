#include <iostream>
#include <string>

void main()
{
	setlocale(LC_ALL, "portuguese");
	using namespace std;
	int i, c = 0;
	string Frase;

	cout << "Escreve uma formula quimica: ";
	cin >> Frase;
	for (i = 0; i < Frase.size(); i++) {
		if (isupper(Frase[i])) {
			if (c == 0) {
				cout << "1 ";
			}
			cout << " \n";
			c = 0;
		}
		if(isdigit(Frase[i]) && c == 0) {
			cout << " ";
			c = 1;
		}
		cout << Frase[i];
	}
}