#include <iostream>
// Problema B - Topas 2022 - NO FREE LUNCH
using namespace std;
int i;
int main()
{
	int F, N, e[99], vencedor = 0, maior = 0, soma = 0;
	for (i = 0; i < 99; i++) {
		e[i] = 0;
	}
	cin >> F >> N;
	if (N >= 1 && N <= 10) {
		for (i = 0; i < N; i++) {
			cin >> e[i];
		}
	}
		for (i = 0; i < N; i++) {
			if (e[i] > F) {
				soma += 1;
			}
			else {
				maior = e[i];
				if (e[i] > maior) {
					maior = e[i];
				}
			}
		}
	if (soma == N) {
		cout << "No free lucnh \n";
	}
	else 
	{
		cout << maior;
	}
}