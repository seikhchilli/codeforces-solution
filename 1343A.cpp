#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll arr[32];
  for(int i = 0; i < 32; i++){
    arr[i] = pow(2, i+1) - 1;
  }
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    for(int i = 1; i < 32; i++){
      if(n % arr[i] == 0){
        cout<<(n/arr[i])<<endl;
        break;
      }
    }

  }

}
