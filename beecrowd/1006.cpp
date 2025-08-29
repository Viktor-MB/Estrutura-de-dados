#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  double A, B, C; 
  cin >> A >> B >> C;
  
  if (A < 0 or A > 10.0 or B < 0 or B > 10.0 or C < 0 or C > 10.0) {
    return 0;
  }
  
  double peso = 10.0;
  double MEDIA = ((A * 2.0) + (B * 3.0) + (C * 5.0))/peso;
  
  printf("MEDIA = %.1f\n", MEDIA);
  
  return 0;
}