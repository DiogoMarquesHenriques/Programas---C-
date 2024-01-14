#include <iostream>​​
#include <locale.h>

int main() {
    using namespace std;
    setlocale(LC_ALL, "portuguese");
    int km[1000], m[1000], i, c1, c2, viagens = 0;
    cout << "---------- REGISTO DE CAMINHADAS ----------\n";
    for (i = 0; i < 1000; i++)
    {
        do {
            cout << "====== " << i + 1 << "º caminhada ======\n";
            cout << "Kilometros: ";
            cin >> km[i];
            cout << "Metros: ";
            cin >> m[i];
        } while (km[i] > 100 || km[i] < 0 || m[i] > 999 || m[i] < 0);

        if (km[i] == 0 && m[i] == 0 && viagens > 1) {
            break;
        }
        else if (km[i] == 0 && m[i] == 0 && viagens <= 1) {
            cout << "Nem caminhaste preguiçoso \n";
            break;   
        }
        else {
            viagens = viagens + 1;
        }
    }
    cout << "=======ESTÁTISTICAS=======\n";
    for (i = 1; i < viagens; i++) {
        c1 = (km[i - 1] * 1000) + m[i - 1];
        c2 = (km[i] * 1000) + m[i];
        if (c1 > c2) {
            cout << "BAIXO " << ((c1 - c2) / 1000) << "km e " << ((c1 - c2) % 1000) << "m \n";
        }
        else if (c1 < c2) {
            cout << "AUMENTO " << ((c2 - c1) / 1000) << "km  e " << ((c2 - c1) % 1000) << "m \n";
        }
        else {
            cout << "PATAMAR \n";
        }
    }
    return 0;
}
