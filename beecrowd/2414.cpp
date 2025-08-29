#include <iostream>
#include <cstdio> 
#include <vector>
using namespace std;

int main() {

    vector<int> sequencia;
    int N;
    int maior_numero = 0;

    
    while (cin >> N) {
        
        sequencia.push_back(N);

        for(int i = 0; i < sequencia.size(); i++){
            if (sequencia[i] > maior_numero)
                maior_numero = sequencia[i];
        }
        if (N == 0){
            break;
        } 
        
    }

    cout << maior_numero << endl;

    return 0;
}