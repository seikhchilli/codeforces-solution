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
  ll n;
  while(t--){
    cin>>n;
    ll a, b, c, max = -1;
    cin>>a;
    for(ll i = 1; i < n; i++){
      cin>>b;
      c = a * b;
      max = (c > max) ? c : max;
      a = b;
    }
    cout<<max<<endl;
  }

}
