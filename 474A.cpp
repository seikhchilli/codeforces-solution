#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
  char o;
  cin>>o;
  string s;
  cin>>s;
  if(o == 'R'){
    for(int i = 0; i < s.length(); i++){
      s[i] = k[k.find(s[i]) - 1];
    }
  }
  else{
    for(int i = 0; i < s.length(); i++){
      s[i] = k[k.find(s[i]) + 1];
    }
  }
  cout<<s<<endl;
}
