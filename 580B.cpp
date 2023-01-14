#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define pb push_back
#define endl "\n"
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

bool comp(pair<ll, ll>& a, pair<ll, ll>& b){
  return a.first < b.first;
}

int binary_search(vector<pair<ll, ll>>& arr, int low, int high, ll target){
  while(low <= high){
    int mid = (low + high)/2;
    if(arr[mid].first < target){
      if(mid == high){
        return high + 1;
      }
      low = mid + 1;
    }
    else{
      if(mid == low){
        return mid;
      }
      if(arr[mid-1].first < target){
        return mid;
      }
      high = mid -1;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, d;
  cin>>n>>d;

  vector<pair<ll, ll>> friends;
  ll a, b, s = 0;
  vector<ll> suff;

  for(int i = 0; i < n; i++){
    cin>>a>>b;
    friends.push_back(make_pair(a, b));
    s += b;
  }
  sort(friends.begin(), friends.end(), comp);
  for(int i = 0; i < n; i++){
    suff.pb(s);
    // cout<<friends[i].first<<" "<<suff[i]<<endl;
    s -= friends[i].second;

  }
  suff.pb(0);
  ll ans = -1;
  int j;
  for(int i = 0; i < n; i++){
    j = binary_search(friends, i, n-1, friends[i].first + d);
    // cout<<i<<" "<<j<<endl;
    ans = max(ans, suff[i] - suff[j]);
  }

  cout<<ans<<endl;

}
