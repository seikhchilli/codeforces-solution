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
    int a[3];
    cin>>a[0]>>a[1]>>a[2];

    sort(a, a + 3, greater<int>());

    if(a[0] == a[1]){
      cout<<"YES"<<endl;
      cout<<a[0]<<" "<<a[2]<<" "<<a[2]<<endl;
      continue;
    }

    cout<<"NO"<<endl;
  }

}
