#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

ll powd(ll a, ll b){
  if(b == 0){
    return 1;
  }
  for(ll i = 1; i < b; i++){
    a = a * 2;
  }
  return a;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll x = 0, y = 0, k;
    for(ll i = 0; i < n; i++){
      cin>>k;
      if(k == 1){
        x++;
        continue;
      }
      if(k == 0){
        y++;
        continue;
      }

    }
    cout<<(x * powd(2,y))<<endl;
  }

}
