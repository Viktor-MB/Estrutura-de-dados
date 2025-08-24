// Fibonacci fácil

#include <iostream>
#include <cstdio>
using namespace std;

int F[100];

void calculaFibonacci(int N){
    for (int i = 2; i < N; i++) {
        F[i] = F[i-1] + F[i-2];
    }
}

int main() {
    int N;
    cin >> N;

    F[0] = 0;
    F[1] = 1;

    calculaFibonacci(N);

    for (int i = 0; i < N; i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << F[i] << endl;
    }

    return 0;
}

