#include <cstdio> 
#include <iostream>

using namespace std;


void bubbleSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool trocou = false; 
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                trocou = true;
            }
        }
        if (!trocou) break; 
    }
}