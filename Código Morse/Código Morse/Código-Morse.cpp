#include <iostream>
#include <locale.h>
#include <string>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "portuguese");
	string Frase;
	int i;
	cout << "Escreve uma frase: ";
	cin >> Frase;
	for (i = 0; i < Frase.size(); i++) {
		switch (Frase[i]) {
		case 'A':
		case 'a':
		{
			cout << " ·- ";
			break;
		}
		case 'B':
		case 'b':
		{
			cout << " -··· ";
			break;
		}
		case 'C':
		case 'c':
		{
			cout << " -·-· ";
			break;
		}
		case 'D':
		case 'd':
		{
			cout << " -·· ";
			break;
		}
		case 'E':
		case 'e':
		{
			cout << " · ";
		}
		case 'F':
		case 'f':
		{
			cout << " ··-· ";
		}
		case 'G':
		case 'g':
		{
			cout << " --· ";
			break;
		}
		case 'H':
		case 'h':
		{
			cout << " ···· ";
			break;
		}
		case 'I':
		case 'i':
		{
			cout << " ·· ";
			break;
		}
		case 'J':
		case 'j':
		{
			cout << " ·--- ";
			break;
		}
		case 'K':
		case 'k':
		{
			cout << " -·- ";
			break;
		}
		case 'L':
		case 'l':
		{
			cout << " ·-·· ";
			break;
		}
		case 'M':
		case 'm':
		{
			cout << " -- ";
			break;
		}
		case 'N':
		case 'n':
		{
			cout << " -· ";
			break;
		}
		case 'O':
		case 'o':
		{
			cout << " --- ";
			break;
		}
		case 'P':
		case 'p':
		{
			cout << " ·--· ";
			break;
		}
		case 'Q':
		case 'q':
		{
			cout << " --·- ";
			break;
		}
		case 'R':
		case 'r':
		{
			cout << " ·-· ";
			break;
		}
		case 'S':
		case 's':
		{
			cout << " ··· ";
			break;
		}
		case 'T':
		case 't':
		{
			cout << " - ";
			break;
		}
		case 'U':
		case 'u':
		{
			cout << " ..- ";
			break;
		}
		case 'V':
		case 'v':
		{
			cout << " ···- ";
			break;
		}
		case 'W':
		case 'w':
		{
			cout << " ·-- ";
			break;
		}
		case 'X':
		case 'x':
		{
			cout << " -··- ";
			break;
		}
		case 'Y':
		case 'y':
		{
			cout << " -·-- ";
			break;
		}
		case 'Z':
		case 'z':
		{
			cout << " --·· ";
			break;
		}
		}
	}
}