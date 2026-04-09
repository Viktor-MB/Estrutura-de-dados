#include <cstdio>
#include <iostream>

using namespace std;

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > chave) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = chave;
    }
}