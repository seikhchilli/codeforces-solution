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
    int l1, r1, l2, r2;
    cin>>l1>>r1>>l2>>r2;
    if(r1 >= max(l1, l2) && r2 >= max(l1, l2)){
      cout<<max(l1, l2)<<endl;
    }
    else{
      cout<<l1+l2<<endl;
    }
  }

}
