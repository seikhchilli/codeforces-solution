#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  int m;
  cin>>m;
  sort(arr, arr+n);
  while(m--){
    int t;
    cin>>t;
    int a;
    a = upper_bound(arr, arr+n, t) - arr;
    cout<<a<<endl;


  }

}
