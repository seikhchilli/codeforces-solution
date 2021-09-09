#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a, b, max = 0, tot = 0;
  for(int i = 0; i < n; i++){
    cin>>a;
    cin>>b;
    tot -= a;
    tot += b;
    max = tot > max ? tot : max;
  }
  cout<<max;
  
  return 0;
}
