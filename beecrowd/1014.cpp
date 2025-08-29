#include <iostream>
#include <cstdio>
using namespace std;


int main() {
  
  int x; 
  double y;
  
  cin >> x >> y; 
  
  double consumoMedio = x / y;
  
  printf("%.3f km/l\n", consumoMedio);
  
  return 0;
}