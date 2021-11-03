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
    string k, s;
    cin>>k>>s;
    int move = 0;
    for(int i = 0; i < s.length() - 1; i++){
      char curr = s[i];
      char nxt = s[i+1];
      int curr_i = k.find(curr);
      int nxt_i = k.find(nxt);
      move += abs(nxt_i - curr_i);
    }
    cout<<move<<endl;
  }

}
