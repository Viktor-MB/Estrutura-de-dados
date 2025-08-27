#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


vector<int> numeros;

int main(){

    int N;
    cin >> N; 

    for(int i=0; i < N; i++){

        int numero;
        cin >> numero;
        numeros.push_back(numero);
        
        
    }

    for(int numero : numeros){
        cout << numero << endl;
    }

    return 0;
}