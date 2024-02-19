#include <iostream>

void main()
{
	setlocale(LC_ALL, "portuguese");
	using namespace std;
	int num, expo, soma = 1, i;


	cout << "Diz um número: ";
	cin >> num;
	cout << "Diz o expoente: ";
	cin >> expo;
	
	for (i = 0; i < expo; i++) {
		soma *= num;
	}
	cout << num << "^" << expo << " = " << soma;
	
}