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

  for(auto i : s){
    if(i == 'h' && r == ""){
      r += i;
    }
    else if(i == 'e' && r[r.length() - 1] == 'h'){
      r += i;
    }
    else if(i == 'l' && r[r.length() - 1] == 'e'){
      r += i;
    }
    else if(i == 'l' && r[r.length() - 2] == 'e' && r[r.length() - 1] == 'l'){
      r += i;
    }
    else if(i == 'o' && r[r.length() - 1] == 'l' && r[r.length() - 2] == 'l' && r[r.length() - 3] == 'e'){
      r += i;
    }
  }
  (r == "hello") ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
