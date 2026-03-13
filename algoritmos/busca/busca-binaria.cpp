#include <cstdio>
#include <iostream>

using namespace std;

int buscaBinaria(int A[], int n, int alvo) { 
    int esq = 0, dir = n - 1; 
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2; 
        if (A[meio] == alvo) return meio; 
        if (A[meio] < alvo) esq = meio + 1; 
        else dir = meio - 1;
    }
    return -1; 
}