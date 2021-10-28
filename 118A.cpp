#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s, r = "";
  cin>>s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  for(auto i : s){
    if( i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'y' || i == 'u'){
      continue;
    }
    else{
      r += ".";
      r += i;
    }
  }
  cout<<r<<endl;
}
