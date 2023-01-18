#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl "\n"
#define debug(n) cout<<(n)<<endl;
#define pb push_back
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    int n, m, k;
    cin>>n>>m>>k;
    int seg;
    if (n % k != 0){
      seg = n/k + 1;
    }
    else{
      seg = n /k;
    }
    int x, count = 0;
    bool check = true;
    for(int i = 0; i < m; i++){
      cin>>x;
      if(x > seg){
        check = false;
      }
      if(x == seg){
        count++;
      }
    }
    if(n % k != 0 && count > n % k){
      check = false;
    }
    if(check){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }

}
