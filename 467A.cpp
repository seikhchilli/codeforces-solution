#include<iostream>
using namespace std;

int main(){
  int n, p, q, count = 0;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>p;
    cin>>q;
    if(q - p >= 2){
      count++;
    }
  }
  cout<<count;
  return 0;
}
