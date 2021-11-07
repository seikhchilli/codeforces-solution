#include<iostream>
using namespace std;

int main(){
  int a, b;
  cin>>a;
  cin>>b;
  int year = 0;

  while(b >= a){
    a *= 3;
    b *= 2;
    year++;
  }
  cout<<year;
}
