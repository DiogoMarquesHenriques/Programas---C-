#include <iostream>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "portuguese");
	using namespace std;
	int ano;
	cout << "Introduz um ano: ";
	cin >> ano;
	
    if (ano % 100 == 0){
		if (ano % 400 == 0) {
			cout << ano << " � um ano bissexto ";
		}
		else {
			cout << ano << " n�o � um nao bissexto ";
		}
	}
	else if (ano % 4 == 0) {
		cout << ano << " � um ano bissexto ";
	}
	
}