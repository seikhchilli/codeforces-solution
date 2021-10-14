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
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0; i < n; i++){
      cin>>arr[i];
    }

    sort(arr,arr+n);
    ll count = 0;

    for(ll i = 1; i < n; i++){
      count = __gcd(count, arr[i] - arr[i-1]);
    }

    if(count == 0){
        cout<<-1<<endl;
        continue;
    }
    cout<<count<<endl;
  }

}
