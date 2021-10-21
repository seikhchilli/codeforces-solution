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
    int n, x;
    cin>>n>>x;
    if( n > 2){
        n -= 2;
        if(n % x > 0){
          cout<<(n / x + 2)<<endl;
        }
        else{
          cout<<(n / x + 1)<<endl;
        }
    }
    else{
      cout<<1<<endl;
    }

  }
}
