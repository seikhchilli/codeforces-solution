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

    unordered_map<int, int> mp;
    ll x;
    for(ll i = 0; i < n; i++){
      cin>>x;
      mp[x]++;
    }

    unordered_map<int, int>::iterator it = mp.begin();
    ll count = 0;
    while (it != mp.end()) {
        count += it->second / 3;
        ++it;
    }
    cout<<count<<endl;
  }

}
