#include <cstdio>
#include <iostream>

using namespace std;

int buscaLinear(int A[], int n, int alvo) { 
    for (int i = 0; i < n; i++) {
        if (A[i] == alvo) { 
            return i; 
        } 
    } 
    return -1;
}