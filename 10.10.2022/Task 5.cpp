#include <iostream>

using namespace std;
int main() {
  int N, A, sum;
  
  cout << "Введіть число: "<< endl;
  cin >> N;
  
  sum=0;
  while(N!=0){
    A=N%10;
    if(A>=7){
      sum+=0;
    }else{
      sum+=A;
    }
    N=N/10;
  }
  cout << sum;
}