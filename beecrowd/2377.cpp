#include <iostream>
#include <cstdio>
using namespace std;



int main(){


    int L, D, K, P;

    cin >> L >> D; 
    cin >> K >> P;

    int custo_pedagios = (L / D) * P;
    int custo_quilometro = L * K;


    int custo_total = custo_pedagios + custo_quilometro;
    cout << custo_total << endl;


    return 0; 
}