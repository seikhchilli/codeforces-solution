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

    cout<<max(6LL, n + 1) / 2 * 5 <<endl;
  }

}
