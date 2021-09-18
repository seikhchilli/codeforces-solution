#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int x, y, n;
    cin>>x>>y>>n;
    int k = (n % x) - y >= 0 ? (n - (((n % x) - y))) : (n - (x + ((n % x) - y)));
    cout<<k<<endl;
  }
}
