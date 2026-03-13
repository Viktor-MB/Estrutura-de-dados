#include <cstdio>
#include <iostream>

using namespace std;

void merge(int A[], int esq, int meio, int dir) {
    int n1 = meio - esq + 1, n2 = dir - meio; 
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = A[esq + i]; 
    for (int i = 0; i < n2; i++) R[i] = A[meio + 1 + i];
    int i = 0, j = 0, k = esq; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) A[k++] = L[i++]; 
        else A[k++] = R[j++];
    }
    while (i < n1) A[k++] = L[i++]; 
    while (j < n2) A[k++] = R[j++];
}

void mergeSort(int A[], int esq, int dir) { 
    if (esq < dir) {
        int meio = esq + (dir - esq) / 2; 
        mergeSort(A, esq, meio); 
        mergeSort(A, meio + 1, dir); 
        merge(A, esq, meio, dir);
    } 
}