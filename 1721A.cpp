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
    unordered_set<char> uos;
    string s1, s2;
    cin>>s1>>s2;
    uos.insert(s1[0]);
    uos.insert(s1[1]);
    uos.insert(s2[0]);
    uos.insert(s2[1]);
    cout<<uos.size()-1<<endl;
  }

}
