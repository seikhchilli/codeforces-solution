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
    int ans;
    if(n == 1){
      ans = 2;
    }
    else if(n % 3 != 0){
      ans = n/3 + 1;
    }
    else{
      ans = n/3;
    }
    cout<<ans<<endl;
  }

}
