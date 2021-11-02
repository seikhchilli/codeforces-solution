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
    int n;
    cin>>n;
    int maxel = 0;
    int x;
    for(int i = 1; i <= n; i++){
      cin>>x;
      if(x - i > maxel){
        maxel = x - i;
      }
    }
    cout<<maxel<<endl;
  }

}
