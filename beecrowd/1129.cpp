// Leitura Ótica

#include <iostream>
#include <cstdio>
using namespace std;


int main(){

    while (true){

        int N;
        cin >> N; 

        if (N == 0){
            break;
        }

        for (int i = 0; i < N; i++){
            
            int A, B, C, D, E;
            cin >> A >> B >> C >> D >> E;


            int opcoes_marcadas = 0;
            char resposta = '*';

            if(A <= 127){
                opcoes_marcadas++;
                resposta = 'A';
            } 
            if (B <= 127){
                opcoes_marcadas++;
                resposta = 'B';
            } 
            if (C <= 127){
                opcoes_marcadas++;
                resposta = 'C';
            }
            if (D <= 127){
                opcoes_marcadas++;
                resposta = 'D';
            }
            if (E <= 127){
                opcoes_marcadas++;
                resposta = 'E';
            }

            if (opcoes_marcadas == 1){
                cout << resposta << endl;
            } else {
                cout << "*" << endl;
            }

        }
    }

    return 0;
}