#include <iostream>
#include <cstdio> 
using namespace std;


int main(){
    
    int X, Y; 
    cin >> X >> Y;


    if(0 <= X and X <= 432 and 0 <= Y and Y <= 468){
        cout << "dentro" << endl;
    } else {
        cout << "fora" << endl;
    }

}