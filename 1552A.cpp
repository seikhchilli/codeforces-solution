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
  string s, k;
  while(t--){
    int n;
    cin>>n;
    cin>>s;
    k = s;
    sort(s.begin(), s.end());
    int count = 0;
    for(int i = 0; i < s.length(); i++){
      if(s[i] != k[i]){
        count++;
      }
    }

    cout<<count<<endl;

  }

}
