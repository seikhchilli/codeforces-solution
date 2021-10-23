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
    int a, b;
    cin>>a>>b;
    int res, n = a - 1;
    if(n % 4 == 0){
      res = n;
    }
    else if(n % 4 == 1){
      res = 1;
    }
    else if(n % 4 == 2){
      res = n + 1;
    }
    else{
      res = 0;
    }

    if(res == b){
      cout<<a<<endl;
    }
    else{
      if((res ^ b) != a){
        cout<<(a + 1)<<endl;
      }
      else{
        cout<<(a + 2)<<endl;
      }
    }
  }
}
