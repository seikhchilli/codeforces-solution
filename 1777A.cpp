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
    int arr[n];
    int x, ans = 0;
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }
    for(int i = 0; i < n-1; i++){
      if(((arr[i] % 2) and (arr[i+1]%2)) or ((arr[i]%2 == 0) and (arr[i+1]%2 == 0))){
        ans++;
      }
    }
    cout<<ans<<endl;
  }

}
