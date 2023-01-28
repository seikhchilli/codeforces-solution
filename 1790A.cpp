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

  string p = "314159265358979323846264338327";
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int i = 0;
    while(i < s.size() && i < p.size() && s[i] == p[i]) i++;
    cout<<i<<endl;
  }

}
