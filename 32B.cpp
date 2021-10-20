#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s, res = "";
  cin>>s;
  for(int i = 0; i < s.length(); i++){
    if(s[i] == '.'){
      res += '0';
    }
    else if(s[i] == '-'){
      i++;
      if(s[i] == '.'){
        res += '1';
      }
      else{
        res += '2';
      }
    }
  }
  cout<<res<<endl;

}
