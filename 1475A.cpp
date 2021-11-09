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
    while(n != 1){
      if(n % 2 == 0){
        n /= 2;
      }
      else{
        cout<<"YES"<<endl;
        break;
      }
    }
    if(n == 1){
      cout<<"NO"<<endl;
    }

  }
}
