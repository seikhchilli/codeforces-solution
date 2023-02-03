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
    int n;
    cin>>n;
    vector<int> arr(n), prefix(n, 0);
    ll ans = 0, count = 0;
    for(int i = 0; i < n; i++){
      cin>>arr[i];
      ans += abs(arr[i]);
      if(arr[i] < 0) count++;
    }
    for(int i= 0;i < n; i++){
      if(arr[i] < 0){
        arr[i] = abs(arr[i]);
      }
    }
    if(!(count % 2)){
      cout<<ans<<endl;
      continue;
    }
    int mini = *min_element(arr.begin(), arr.end());
    cout<<ans-(2*mini)<<endl;

  }

}
