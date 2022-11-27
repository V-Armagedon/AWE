#include <iostream>
#include<math.h>

using namespace std;
int main() {
  int x, a, b, h;
  float Y;

  cin >> a;
  cin >> b;
  cin >> h;
  x=a;

  cout << "-------------------" << endl;
  cout << ":   X    :    Y   :" << endl;
  cout << "-------------------" << endl;
  
  do{
    if(10-5*x<0){
      cout << "x не задовольняє ОДЗ";
      break;
    }else{
      Y=6*pow(x,3)+sqrt(10-5*x);
    }
    cout << ":   "<< x <<"    :    "<<Y<<"   :" << endl;
    cout << "-------------------" << endl;
    x=x+h;
  }while(x<=b);
  
  
}