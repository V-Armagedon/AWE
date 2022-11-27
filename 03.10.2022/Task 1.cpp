#include <iostream>
#include<cmath>

using namespace std;
int main() {
  int x;
  float Y;
  for(int i=0; i<5; i++){
    cin >>x;
    Y=pow(sin(x), 5) + abs(5*x-1.5);
    cout << Y<< endl;
  }
  
  
}