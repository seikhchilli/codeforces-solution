#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n;
  cin>>n;
  ll arr[n];
  for(ll i = 0; i < n; i++){
    cin>>arr[i];
  }

  sort(arr, arr+n);
  for(auto i : arr){
    cout<<i<<" ";
  }
  cout<<endl;

}
