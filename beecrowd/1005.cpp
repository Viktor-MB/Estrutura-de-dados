#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  double A, B; 
  cin >> A >> B;
  
  if (A < 0 or A > 10.0 or B < 0 or B > 10.0) {
    return 0;
  }
  
  double peso = 11.0;
  double MEDIA = ((A * 3.5) + (B * 7.5))/peso;
  
  printf("MEDIA = %.5f\n", MEDIA);
  
  return 0;
}