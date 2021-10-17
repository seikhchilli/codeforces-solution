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
  int n;
  while(t--){
    cin>>n;
    bool check = false;

    if(n & 1){
      for(int i = 1; i <= n; i++){
        check = !check;
        if(i == n-2){
          cout<<i+1<<" ";
          continue;
        }
        if(i == n-1){
          cout<<i+1<<" ";
          continue;
        }
        if(i == n){
          cout<<i-2<<" ";
          continue;
        }
        if(check){
          cout<<i+1<<" ";
        }
        else{
          cout<<i-1<<" ";
        }
      }
    }
    else{
      for(int i = 1; i <= n; i++){
        check = !check;
        if(check){
          cout<<i+1<<" ";
        }
        else{
          cout<<i-1<<" ";
        }
      }
    }
    cout<<endl;
  }

}
