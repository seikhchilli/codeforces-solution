#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    int n, m;
    cin>>n>>m;
    if(n == 1 && m == 1){
      cout<<0<<endl;
      continue;
    }
    else if( n == 1 || m == 1){
      cout<<1<<endl;
      continue;
    }
    else{
      cout<<2<<endl;
    }
  }
}
