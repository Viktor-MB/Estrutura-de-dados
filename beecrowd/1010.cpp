#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  int codPeca1, codPeca2;
  int qtdPeca1, qtdPeca2; 
  double valorPeca1, valorPeca2;
  
  
  cin >> codPeca1 >> qtdPeca1 >> valorPeca1;
  cin >> codPeca2 >> qtdPeca2 >> valorPeca2;
  
  double valor = (qtdPeca1 * valorPeca1) + (qtdPeca2 * valorPeca2);
  
  printf("VALOR A PAGAR: R$ %.2f\n", valor);
  
  return 0;
}