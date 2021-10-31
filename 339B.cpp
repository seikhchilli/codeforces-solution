#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, m;
  cin>>n>>m;

  ll p1 = 1, p2, steps = 0;
  while(m--){
    cin>>p2;
    if(p2 < p1){
      steps += (n - p1 + p2);
    }
    else{
      steps += (p2 - p1);
    }
    p1 = p2;
  }
  cout<<steps<<endl;

}
