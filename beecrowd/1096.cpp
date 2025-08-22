// Sequencia IJ 2

#include <iostream>
#include <cstdio>
using namespace std;


int main(){

    while (true){

        int I, J; 

        for(I = 1; I <= 9; I+=2){
            for(J = 7; J >= 5; J--){ 
                cout << "I=" << I << " J=" << J << endl;
            }
        }

        if (I <= 9){
            break;
        }
    }
}