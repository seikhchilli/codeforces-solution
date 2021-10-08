#include<bits/stdc++.h>
using namespace std;


#define ll long long
//#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, a, x, b, y;
  cin>>n>>a>>x>>b>>y;

  while(a != x && b != y){
    a++;
    b--;
    if(a == n+1){
      a = 1;
    }
    if( b == 0){
      b = n;
    }
    if(a == b){
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;

}
