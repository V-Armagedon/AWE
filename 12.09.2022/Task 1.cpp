#include <iostream>
#include <math.h>

int main() {
  int a, b, c, Alpha, Beta;
  float x, Y;

  std::cout << "a:";
  std::cin >> a;
  std::cout << "b:";
  std::cin >> b;
  std::cout << "c:";
  std::cin >> c;
  std::cout << "x:";
    std::cin >> x;
  
  if(x >= 1.5){
    Y=((pow(x,3)+3*a)*c)/(a-b+x);
  }else{
    std::cout << "Введіть корректний x: ";
    std::cin >> x;
  }
  
  std::cout << "Відповідь: " << Y<< std::endl;

  std::cout << "Alpha:";
  std::cin >> Alpha;
  std::cout << "Beta:";
  std::cin >> Beta;
  Y=pow(sin(Alpha),2)*pow(sin(Beta),2);
  std::cout << "Відповідь: " << Y;
}