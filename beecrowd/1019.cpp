#include <iostream>
#include <cstdio>

using namespace std;


void converteTempo (int N){
    
    int horas = N / 3600;
    N = N % 3600;
    int minutos = N / 60;
    int segundos = N % 60;
    
    cout << horas << ":" << minutos << ":" << segundos << endl;
    
}


int main() {
    
    int N; 
    cin >> N;
    
    converteTempo(N);
    
    return 0;
}