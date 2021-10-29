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
  bool check = true;
  for(int i = 1; i < s.length(); i++){
    if(s[i] >= 97){
      check = false;
      break;
    }
  }
  if(s[0] <= 90 && check){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
  else if(s[0] >= 97 && check){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++){
      s[i] = tolower(s[i]);
    }
  }
  cout<<s<<endl;

}
