#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    if(n%2 != 0){
      n--;
      cout<<(n/2)<<endl;
      continue;
    }
    cout<<(n/2)<<endl;
  }
  return 0;
}
