#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int coordenadaX, coordenadaY;

    while (true) {
        
        cin >> coordenadaX >> coordenadaY;
        if (coordenadaX == 0 || coordenadaY == 0) {
            break;  
        }
        

        if (coordenadaX > 0 && coordenadaY > 0) {
            cout << "primeiro" << endl;
        } 
        
        else if (coordenadaX < 0 && coordenadaY > 0) {
            cout << "segundo" << endl;
        } 
        
        else if (coordenadaX < 0 && coordenadaY < 0) {
            cout << "terceiro" << endl;
        } 
        
        else {
            cout << "quarto" << endl;
        }
    }

    return 0;
}

