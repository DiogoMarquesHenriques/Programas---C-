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
		cout << "Adivinha o número escolhido: ";
		cin >> n;
		if (n > alt) {
			cout << "O número escolhido é menor \n";
		}
		else if (n < alt) {
			cout << "O número escolhido é maior \n";
		}

	} while (n != alt);
	
	cout << "Parabéns acertaste o número escolhido " << alt;

return 0;
}