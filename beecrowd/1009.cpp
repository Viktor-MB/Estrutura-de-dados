#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  string nome;
  double salario, totalVendas; 
  
  cin >> nome >> salario >> totalVendas;
  
  double salarioBonus = salario + (totalVendas * 0.15);
  
  printf("TOTAL = R$ %.2f\n", salarioBonus);
  
  
  return 0;
}