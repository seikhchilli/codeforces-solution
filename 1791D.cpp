#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl "\n"
#define debug(n) cout<<(n)<<endl;
#define pb push_back
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    unordered_set<char> pre;
    unordered_set<char> suff;
    vector<int> prefix, suffix(n, 0);
    string s;
    cin>>s;
    for(auto i:s){
      pre.insert(i);
      prefix.pb(pre.size());

    }
    for(int i = n-1; i >=0; i--){
      suff.insert(s[i]);
      suffix[i] = suff.size();

    }
    int ans = 0;
    for(int i = 0; i < n-1; i++){

      ans = max(prefix[i]+suffix[i+1], ans);
    }
    cout<<ans<<endl;
  }

}
