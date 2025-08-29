#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  int a, b, c;
  
  cin >> a >> b >> c;
  
  int maiorAB = (a + b + abs(a-b))/2;
  
  if (c > maiorAB){
    maiorAB = c;
  }
  
  printf("%d eh o maior\n", maiorAB);
  
  return 0;
}


