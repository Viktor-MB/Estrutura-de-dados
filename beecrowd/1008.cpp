#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  int numFunc, hora; 
  double valorHora; 
  
  cin >> numFunc>> hora >> valorHora;
  
  double salario = hora * valorHora;
  
  printf("NUMBER = %d\n", numFunc);
  printf("SALARY = U$ %.2f\n", salario );
  
  return 0;
}