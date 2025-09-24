#include <cstdio>
#include <iostream>

using namespace std;

void counting_sort(int V[], int n, int aux[], int maximo){
    // Conta as ocorrências de cada valor
    for(int i = 0; i < n; i++){
        aux[V[i]]++;
    }
    
    int idx = 0;
    for(int i = 0; i <= maximo; i++) {
        while(aux[i] > 0) {
            V[idx++] = i;
            aux[i]--;
        }
    }
}