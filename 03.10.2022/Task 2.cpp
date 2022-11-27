#include <iostream>

using namespace std;
int main() {
  unsigned long int mul=1;

  for(int i=10; i<100; i+=2){
      cout<< mul<< endl;
      mul = mul*i;
  }
  cout << mul;
}