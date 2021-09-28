#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int a, b;
    cin>>a>>b;
    if(a > b){
      if((a%2 == 0 && b%2 == 0) || (a%2 != 0 && b%2 != 0)){
        cout<<1<<endl;
        continue;
      }
      cout<<2<<endl;
      continue;
    }
    if(a < b){
      if((a%2 == 0 && b%2 == 0) || (a%2 != 0 && b%2 != 0)){
        cout<<2<<endl;
        continue;
      }
      cout<<1<<endl;
      continue;
    }
    cout<<0<<endl;
  }
  return 0;
}
