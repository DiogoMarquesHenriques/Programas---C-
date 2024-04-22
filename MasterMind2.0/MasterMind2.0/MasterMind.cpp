#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	string nome;
	int repetir = 1, valor, jogo[5][10], i, j, jogadas = 10, n[5][10], soma = 0;
	srand(time(0));
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			jogo[i][j] = rand() % 2 + 1;
		}
	}
    do {
	cout << "---------------MENU---------------\n";
	cout << "1 - Inserir o Nome\n2 - Jogar\n0 - Sair \n";
	cin >> valor;
			switch (valor) {
				case 1: {
					cout << "Nome: ";
					cin >> nome;
					cout << "Bem-Vindo(a) " << nome <<"!\n";
					break;
				}
				case 2: {
					cout << "-------------JOGO-------------\n";
					for (i = 0; i < 5; i++) {
						if (jogadas == 0) {
							cout << "Womp Womp perdeste as tuas jogadas "<<nome<<" :/\n";
						break;
						}
						for (j = 0; j < 10; j++) {
							cout << "Digite um número [1/2]: ";
							cin >> n[i][j];
							jogadas = jogadas - 1;
							if (n[i][j] == jogo[i][j]) {
								soma = soma + 1;
							}
						}
					}
					cout << "No total acertaste " << soma << " vezes\n";
					cout << "=============MASTERMIND=============";
					for (i = 0; i < 5; i++) {
						cout << "\n";
						for (j = 0; j < 10; j++) {
							cout << "[" << jogo[i][j] << "]";
						}
					}
					cout << "\n";
					break;
				}
				case 0: {
					cout << "fechar";
					repetir = 0;
					break;
				}
				default: {
					cout << "[Caractér Inválido]\n";
				}
		}
	} while (repetir != 0);
	return 0;
}
