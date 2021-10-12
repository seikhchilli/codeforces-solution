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
  int h, m;
  while(t--){
    cin>>h;
    cin>>m;
    cout<<(1440 - (h * 60) - m)<<endl;
  }
}
