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
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(max(a, b) > min(c, d) && max(c, d) > min(a, b)){
      cout<<"YES"<<endl;
      continue;
    }
    cout<<"NO"<<endl;
  }

}
