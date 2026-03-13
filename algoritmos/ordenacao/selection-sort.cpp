#include <cstdio>
#include <iostream>

using namespace std;

void selectionSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; 
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[min_idx]) {
                min_idx = j;
            }
        }
        int temp = A[min_idx];
        A[min_idx] = A[i];
        A[i] = temp;
    }
}