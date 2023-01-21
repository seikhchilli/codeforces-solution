#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl "\n"
#define debug(n) cout<<(n)<<endl;
#define pb push_back
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll res = (n-1)*n;
    for(ll i = 1; i <= n; i++){
      res = ((res%1000000007)*i)%1000000007;
    }
    cout<<res<<endl;
  }

}
