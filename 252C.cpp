#include<bits/stdc++.h>
using namespace std;


#define ll long long
// #define endl "\n"
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int binary_search(ll arr[], int low, int high, ll target){
  while(low < high){
    int mid = (low + high)/2;
    if(arr[mid] > target){
      high = mid -1;
    }
    else{
      if(mid == high){
        return mid;
      }
      if(arr[mid+1] > target){
        return mid;
      }
      low = mid +1;
    }
  }
  return low;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, d;
  cin>>n>>d;
  ll arr[n];
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  ll ans = 0;
  for(int i = 0; i < n; i++){
    ll j = binary_search(arr, i, n-1, arr[i]+d);
    if(j - i > 1){
      ll cnt = j - i + 1;
      ans += ((cnt-2)*(cnt-1))/2;
    }
  }
  cout<<ans<<endl;
}
