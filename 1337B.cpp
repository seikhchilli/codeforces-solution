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
  int n, x, m;
  while(t--){
    cin>>n>>x>>m;
    while(n > 0 && m > 0){
      if(n > 20 && x > 0){
        n /= 2;
        n += 10;
        x--;
      }
      else{
        n -= 10;
        m--;
      }
    }
    (n <= 0) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
  }

}
