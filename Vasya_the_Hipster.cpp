#include<iostream>
using namespace std;

int main(){
  int a, b;
  cin>>a;
  cin>>b;
  int hip, sip;
  hip = a <= b ? a : b;
  sip = ((a <= b ? b : a) - hip)/2;
  cout<<hip<<" "<<sip;
}
