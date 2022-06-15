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
    int n, k;
    cin>>n>>k;
    int x, sum = 0;
    for(int i = 0; i < n; i++){
      cin>>x;
      sum += x;
    }
    if(sum - k <= 0){
      cout<<0<<endl;
    }
    else{
      cout<<(sum-k)<<endl;
    }
  }
}
