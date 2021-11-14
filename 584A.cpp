#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, t;
  cin>>n>>t;
  if(n == 1 && t == 10){
    cout<<-1<<endl;
    return 0;
  }
  else if(n == 1){
    cout<<t<<endl;
    return 0;
  }
  if(t == 10){
    t = 1;
  }
  cout<<t;
  for(int i = 0; i < n-1; i++){
    cout<<0;
  }

}
