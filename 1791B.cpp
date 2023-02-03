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
  while(t--){
    bool flag = false;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i = 0, j = 0;
    for(auto c: s){
      if(c == 'U'){
        j++;
      }
      else if(c == 'D'){
        j--;
      }
      else if(c == 'L'){
        i--;
      }
      else{
        i++;
      }
      if(i == 1 && j == 1){
        flag = true;
        break;
      }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }

}
