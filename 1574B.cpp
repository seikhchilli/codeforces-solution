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
    int a[3], m;
    cin>>a[0]>>a[1]>>a[2]>>m;
    sort(a, a + 3);
    int low = a[2] - 1 - (a[0] + a[1]);
    int high = a[2] + a[1] + a[0] - 3;
    (m <= high && m >= low) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
  }

}
