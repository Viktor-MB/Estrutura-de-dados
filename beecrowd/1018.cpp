#include <iostream>
#include <cstdio>
#include <list>
using namespace std;



void calculoNotas(int N){
    
    list<int> notasValores = {100, 50, 20, 10, 5, 2, 1};
    
    cout << N << endl;
    
    for(auto nota : notasValores){
        
        int quantidadeNotas = N / nota;
        N = N % nota;
        
        cout << quantidadeNotas << " nota(s) de R$ " << nota << ",00"<< endl;
    }
}



int main() {
  
  int N; 
  cin >> N;
  
  
  calculoNotas(N);
   
    
    return 0;
}