#include <iostream>
#include <locale.h>
#include <ctime>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "portuguese");
	srand(time(0));
	int n, alt;
	alt = rand() % 99 + 1;
	cout << "---------JOGO DO ADIVINHA---------\n";
	do {
		cout << "Adivinha o n�mero escolhido: ";
		cin >> n;
		if (n > alt) {
			cout << "O n�mero escolhido � menor \n";
		}
		else if (n < alt) {
			cout << "O n�mero escolhido � maior \n";
		}

	} while (n != alt);
	
	cout << "Parab�ns acertaste o n�mero escolhido " << alt;

return 0;
}