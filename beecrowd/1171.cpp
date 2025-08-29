#include <iostream>
#include <list>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    list<int> numeros;
    for (int i = 0; i < N; i++) {
        int numero;
        cin >> numero;
        numeros.push_back(numero);
    }

    map<int, int> freq;
    for (int numero : numeros) {
        freq[numero]++;
    }

    for (auto it = freq.begin(); it != freq.end(); ++it) {
        cout << it->first << " aparece " << it->second << " vez(es)" << endl;
    }

    return 0;
}