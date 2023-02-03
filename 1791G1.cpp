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
    ll n, c;
    cin>>n>>c;
    vector<ll> arr;
    ll x;
    for(int i = 0; i < n; i++){
      cin>>x;
      arr.pb(x+i+1);
    }
    sort(arr.begin(), arr.end());
    ll ans = 0;
    for(int i = 0; i < n;i++){
      if(c >= arr[i]){
        c -= arr[i];
        ans++;
      }
      else{
        break;
      }
    }
    cout<<ans<<endl;
  }

}
