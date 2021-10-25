#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;


#include<bits/stdc++.h>
using namespace std;




int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  ll a, b, c;
  while(t--){
    cin>>a>>b>>c;

    ll n = a + 2 * b + 3 * c;
    cout<<(n%2)<<endl;

  }
}
