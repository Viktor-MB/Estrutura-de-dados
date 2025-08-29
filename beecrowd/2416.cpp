#include <iostream>
#include <cstdio> 
using namespace std;

int main() {
    
    int C, N; 
    cin >> C >> N;

    int ponto_de_termino = C % N;
    cout << ponto_de_termino << endl;

    return 0;

}