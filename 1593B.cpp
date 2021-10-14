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
    int lftcount = 0;
    int i;
    for(i = s.length() - 1; i >= 0; i--){

      if(s[i] == '5' || s[i] == '0'){
        break;
      }
      lftcount++;
    }
    int rgtcount = 0;
    if(s[i] == '5'){
      for(int j = i-1; j >= 0; j--){
        if(s[j] == '2' || s[j] == '7'){
          break;
        }
        if(s[j] == '0'){
          i = j;
          rgtcount++;
          break;
        }
        rgtcount++;
      }
    }
    if(s[i] == '0'){
      for(int j = i - 1; j >= 0; j--){
        if(s[j] == '5' || s[j] == '0'){
          break;
        }
        rgtcount++;
      }
    }
    cout<<(rgtcount + lftcount)<<endl;
  }

}
