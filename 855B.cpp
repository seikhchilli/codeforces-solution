#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl "\n"
#define debug(n) cout<<(n)<<endl;
#define pb push_back

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, p, q, r;
  cin>>n>>p>>q>>r;

  ll x, maxpx, maxpqx, maxpqrx, px, qx, rx;
  cin>>x;
  maxpx = p * x;
  maxpqx = maxpx + q * x;
  maxpqrx = maxpqx + r * x;
  for(int i = 1; i < n; i++){
    cin>>x;
    px = p * x;
    qx = q * x;
    rx = r * x;
    maxpx = max(maxpx, px);
    maxpqx = max(maxpqx, maxpx + qx);
    maxpqrx = max(maxpqrx, maxpqx + rx);
  }

  cout<<(maxpqrx)<<endl;

}
