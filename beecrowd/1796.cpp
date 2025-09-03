#include <iostream>
#include <cstdio> 
using namespace std;



int main(){

    int Q; 
    cin >> Q;

    int contador_de_acordo = 0;
    int contador_contra = 0;

    for(int i = 0; i < Q; i++){

        int voto; 
        cin >> voto;

        if(voto == 0){
            contador_de_acordo++;
        } else {
            contador_contra++;
        }
    }

    if (contador_de_acordo > contador_contra){
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}