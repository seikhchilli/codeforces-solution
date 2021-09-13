#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int a, b;
    cin>>a;
    cin>>b;
    int x = a >= b ? (a - b) : (b - a);
    int steps = x % 10 == 0 ? x/10 : (x/10 + 1);
    cout<<steps<<endl;
  }
}
