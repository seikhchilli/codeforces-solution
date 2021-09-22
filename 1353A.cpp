#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  int n, m;
  while (t--) {
    cin>>n>>m;
    if(n == 1){
      cout<<0<<endl;
      continue;
    }
    if(n == 2){
      cout<<m<<endl;
      continue;
    }
    cout<<(2 * m)<<endl;
  }
  return 0;
}
