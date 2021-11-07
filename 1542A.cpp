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
    int n;
    cin>>n;
    int od_sum = 0, ev_sum = 0;
    int x;
    for(int i = 0; i < 2*n; i++){
      cin>>x;
      if(x & 1){
        od_sum++;
      }
      else{
        ev_sum++;
      }
    }
    if(od_sum == ev_sum){
      cout<<"YES"<<endl;
      continue;
    }
    cout<<"NO"<<endl;
  }
}
