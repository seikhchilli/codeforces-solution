#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int m, n;
  cin>>m>>n;
  int rem = m % n;
  for(int i = 0; i < (n - rem); i++){
    cout<<(m/n)<<" ";
  }
  for(int i = 0; i < rem; i++){
    cout<<(m/n + 1)<<" ";
  }
  cout<<endl;
  return 0;

}
