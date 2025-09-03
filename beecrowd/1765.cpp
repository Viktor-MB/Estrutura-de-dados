#include <iostream>
#include <cstdio> 
using namespace std;




int main(){

    while(true){

        int T;
        cin >> T;

        for(int i = 0; i < T; i++){
            
            int Q;
            double A, B;
            cin >> Q >> A >> B;

            double calculo_area = Q * ((A + B) * 5.0) / 2.0;

            cout << "Size #" << i + 1<< ":" << endl;
            printf("Ice Cream Used: %.2f cm2\n", calculo_area);
        }


        if(T == 0){
            break;
        }

        cout << endl;
    }

    return 0;
}