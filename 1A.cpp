#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, m, a;
  cin>>n>>m>>a;
  ll c = (m % a == 0) ? (m / a) : (m / a + 1);
  ll d = (n % a == 0) ? (n / a) : (n / a + 1);
  cout<<(c * d)<<endl;

}
