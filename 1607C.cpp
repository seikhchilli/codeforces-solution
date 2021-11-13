#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }
    sort(arr, arr + n);
    int brr[n];
    brr[0] = arr[0];
    for(int i = 1; i < n; i++){
      brr[i] = arr[i] - arr[i - 1];
    }
    sort(brr, brr+n, greater<int>());
    cout<<brr[0]<<endl;
  }

}
