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
    int l, r;
    cin>>l>>r;
    if(r - l < l){
      cout<<-1<<" "<<-1<<endl;
      continue;
    }
    else{
      cout<<l<<" "<<(2*l)<<endl;
    }

  }
}
