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
  string s = "codefrs";
  while(t--){
    char a;
    cin>>a;
    bool flag = false;
    for(auto i: s){
      if(a == i){
        flag = true;
        break;
      }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  }

}
