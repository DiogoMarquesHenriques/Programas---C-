#include <iostream>
#include <locale.h>
#include <string>

void main()
{
	setlocale(LC_ALL, "portuguese");
	using namespace std;
	int ca = 0, ce = 0, ci = 0, co = 0, cu = 0, repetir = 1, valor, i;
	string txt;
	do {
		cout << "-----------MENU-----------\n";
		cout << "1 - Contar vogais da frase \n0 - Sair \n";
		cin >> valor;
		switch (valor) {
		case 1: {
			cout << "Escreve uma frase: ";
			cin.ignore();
			getline(cin, txt);
			for (i = 0; i < txt.size(); i++) {			
				switch (txt[i]){
				case 'A':
				case 'a': 
				{
					ca = ca + 1;
					break;
				}
					case 'E':
					case 'e':
				{
					ce = ce + 1;
					break;
				}
					case 'I':
					case 'i':
				{
					ci = ci + 1;
					break;
				}
					case 'O':
					case 'o':
				{
					co = co + 1;
					break;
				}
					case 'U':
					case 'u':
				{
					cu = cu + 1;
					break;
				}

				}
			}
			    cout << "A frase contém " << ca << " A\nA frase contém " << ce << " E\nA frase contém " << ci << " I\nA frase contém " << co << " O\nA frase contém " << cu << " U\n";
				ca = 0, ce = 0, ci = 0, co = 0, cu = 0;
				break;
		}
		case 0: {
			cout << "Fechar";
			repetir = 0;
			break;
		}
		}
	} while (repetir != 0);
}