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
    string s;
    cin>>s;
    string k = s;
    sort(s.begin(), s.end());
    cout<<s[0]<<" ";
    int check = 0;
    for(int i = 0; i < k.length(); i++){
      if(k[i] == s[0] && check == 0){
        check = 1;
        continue;
      }
      cout<<k[i];
    }
    cout<<endl;
  }

}
