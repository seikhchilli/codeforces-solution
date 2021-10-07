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
    int a, b, c, a1, b1;
    cin>>a1>>b1>>c;

    a = max(a1, b1);
    b = min(a1, b1);

    if(a - b >= b && 2*(a - b) >= c){
      if(c <= a - b){
        c += (a - b);
      }
      else{
        c -= (a - b);
      }
      cout<<c<<endl;
      continue;
    }

    cout<<-1<<endl;
  }


}
