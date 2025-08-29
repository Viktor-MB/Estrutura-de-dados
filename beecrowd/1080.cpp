#include <iostream>
using namespace std;

int main() {
    
    int numero;
    int maiorValor, posMaior;

    cin >> maiorValor;
    posMaior = 1;

    for (int i = 2; i <= 100; i++) {
        cin >> numero;
        if (numero > maiorValor) {
            maiorValor = numero;
            posMaior = i;
        }
    }

    cout << maiorValor << endl;
    cout << posMaior << endl;

    return 0;
}