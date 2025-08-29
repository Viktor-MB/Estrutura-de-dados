#include <iostream>
#include <cstdio>
using namespace std;


void calculaIdadeDias(int N){
    
    int anos = N / 365;
    N  = N % 365;
    int meses = N / 30;
    int dias = N % 30;

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;

}



int main() {
    
    int N; 
    cin >> N;
    
    calculaIdadeDias(N);
    
    return 0;
}
