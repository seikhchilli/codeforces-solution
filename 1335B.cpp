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
    int n, a, b;
    cin>>n>>a>>b;
    string s = "";
    char c = 'a';
    for(int i = 0; i < n; i++){
      if(i % b == 0){
        c = 'a';
      }
      s += c;
      c = char(c + 1);
    }
    cout<<s<<endl;
  }

}
