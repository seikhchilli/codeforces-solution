#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0; i < n; i++){
      cin>>arr[i];
    }
    ll res = arr[0];

    for(ll i = 1; i < n; i++){
      res &= arr[i];
    }
    cout<<res<<endl;
  }

}
