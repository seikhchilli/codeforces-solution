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
  int arr[n];
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  sort(arr, arr+n);
  int count = 0;
  for(int i = 0; i < m; i++){
    if(arr[i] < 0){
      count -= arr[i];
    }
  }
  cout<<count<<endl;
}
