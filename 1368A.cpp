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
    int a, b, n;
    cin>>a>>b>>n;
    if(b < a){
      int temp = a;
      a = b;
      b = temp;
    }
    int count = 0;

    while(a <= n && b <= n){
      if(a <= n){
        a += b;
        count++;
      }
      if(a > n){
        break;
      }

      if(b <= n){
        b += a;
        count++;
      }
      if(b > n){
        break;
      }

    }
    cout<<count<<endl;
  }

}
