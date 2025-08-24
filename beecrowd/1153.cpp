// Fatorial Simples

#include <iostream>
#include <cstdio>
using namespace std;

int F[1000];

void calculaFatorial(int N){

    F[0] = 1;

    for(int i = 1; i <= N; i++){
        F[i] = i * F[i-1];
    }

}

int main(){

    int N;
    cin >> N;

    calculaFatorial(N);

    cout << F[N] << endl;

    return 0;
}