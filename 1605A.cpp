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
    int a, b, c;
    cin>>a>>b>>c;
    int diff = 2 * b - (a + c);
    (diff % 3 == 0) ? cout<<0<<endl : cout<<1<<endl;
  }

}
