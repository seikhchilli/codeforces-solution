#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin>>n>>m;
  int arr[m];
  for(int i = 0; i < m; i++){
    cin>>arr[i];
  }
  sort(arr, arr+m);
  int res = 1000000;
  for(int i = 0; i <= m - n; i++){
    if((arr[n + i - 1] - arr[i]) < res){
      res = (arr[i+n-1] - arr[i]);
    }
  }
  cout<<res<<endl;

}
