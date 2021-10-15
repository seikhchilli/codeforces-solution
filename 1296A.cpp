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
    int x;
    int odd = 0;
    for(int i = 0; i < n; i++){
      cin>>x;
      (x & 1) ? odd++ : odd += 0;
    }
    (((odd == n) || (odd == 0) )&& !(odd & 1)) ? cout<<"NO"<<endl : cout<<"YES"<<endl;
  }
}
