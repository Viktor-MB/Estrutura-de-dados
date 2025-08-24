// Soma de fatoriais 

#include <iostream>
#include <cstdio> 
using namespace std;

long long fatM[20]; 
long long fatN[20];

void fatorialM(int M){
    fatM[0] = 1;
    for(int i = 1; i <= M; i++){
        fatM[i] = i * fatM[i-1];
    }
}

void fatorialN(int N){
    fatN[0] = 1; 
    for(int i = 1; i <= N; i++){
        fatN[i] = i * fatN[i-1];
    }
}

int main(){

    int M, N;


    while(cin >> M >> N){

        fatorialM(M);
        fatorialN(N);

        cout << fatM[M] + fatN[N] << endl;
    }
        

    return 0;
}
