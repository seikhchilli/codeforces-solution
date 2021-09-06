#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int steps = n % 5 == 0 ? n / 5 :(n / 5) + 1;
  cout<<steps;
  return 0;
}
