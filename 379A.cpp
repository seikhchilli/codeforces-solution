#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll a, b;
  cin>>a>>b;
  ll c = a;
  while(a/b != 0){
    ll temp = a;
    c += a/b;
    a /= b;
    a += temp % b;
  }
  cout<<c<<endl;
}
