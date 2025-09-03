#include <iostream>
#include <cstdio>
using namespace std;


int main() {

    double O, B, I; 
    cin >> O >> B >> I; 


    if(B > O and I > O){
        cout << "Otavio" << endl;
    } else if (O > B and I > B){
        cout << "Bruno" << endl;
    } else if(O > I and B > I){
        cout << "Ian" << endl;
    } else {
        cout << "Empate" << endl;
    }

    return 0;
}