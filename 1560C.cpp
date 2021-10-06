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
  int n;
  while(t--){
    cin>>n;
    int i = 0;
    int dif;
    while(true){
      i++;
      dif = n - (i * (i-1) + 1) ;
      dif *= dif > 0 ? 1 : -1;
      if(dif < i){
        break;
      }
    }
    dif = n - (i * (i-1) + 1) ;
    if(dif > 0){
      cout<<i<<" "<<(i - dif)<<endl;
      continue;
    }
    cout<<(i+dif)<<" "<<i<<endl;

  }
}
