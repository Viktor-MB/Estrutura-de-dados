#include <iostream>
#include <cstdio>
using namespace std;


int main() {
  
  int tempoGasto, veloMedia;
  
  cin >> tempoGasto >> veloMedia;
  
  double qtdLitros = (tempoGasto * veloMedia)/12.0;
  printf("%.3f\n", qtdLitros);
  
  
  return 0;
}