#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    double valor_monetario;
    cin >> valor_monetario;


    int total_centavos = (valor_monetario * 100) + 0.5;

    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;

    for (int nota : notas) {
        int quantidade = total_centavos / nota;
        total_centavos %= nota;
        cout << quantidade << " nota(s) de R$ " << nota / 100 << ".00" << endl;
    }

    cout << "MOEDAS:" << endl;

    for (int moeda : moedas) {
        int quantidade = total_centavos / moeda;
        total_centavos %= moeda;
        printf("%d moeda(s) de R$ %.2f\n", quantidade, moeda / 100.0);
    }

    return 0;
}