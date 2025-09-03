#include <iostream>
#include <cstdio> 
using namespace std;



int main(){
    
    while(true){

        int A, B;
        cin >> A >> B;

        if (A == 0 and B == 0){
            break;
        }

        int valor_C = 2 * A - B;

        cout << valor_C << endl;

    }

    return 0; 

}