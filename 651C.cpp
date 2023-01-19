#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl "\n"
#define debug(n) cout<<(n)<<endl;
#define pb push_back

const ll INF = 2e18 + 99;

long long npairs(ll n){
  return (n *(n-1))/2;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  unordered_map<ll, ll> mpx;
  unordered_map<ll, ll> mpy;
  map<pair<ll, ll>, ll> mpxy;
  int x, y;
  for(int i = 0; i < n; i++){
    cin>>x>>y;
    mpx[x]++;
    mpy[y]++;
    mpxy[make_pair(x, y)]++;
  }
  long long ans = 0;

  for(auto i : mpx){
    ans += npairs(i.second);
  }
  for(auto i : mpy){
    ans += npairs(i.second);
  }
  for(auto i : mpxy){
    ans -= npairs(i.second);
  }
  cout<<ans<<endl;
}
