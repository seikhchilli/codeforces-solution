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
    ll x, y, a, b;
    cin>>x>>y>>a>>b;
    if(2* a < b){
      cout<<(a * x + y * a)<<endl;
      continue;
    }
    else{
      cout<<((max(x, y) - min(x, y)) * a + min(x, y) * b)<<endl;
    }

  }

}
