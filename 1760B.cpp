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
    string s;
    cin>>s;
    int ans = 0;
    for(int i = 0; i < n; i++){
      ans = max(ans, s[i] - 'a' + 1);
    }
    cout<<ans<<endl;
  }

}
