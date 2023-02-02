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
  int n;
  while(t--){
    cin>>n;
    int arr[n];
    int prev, curr;
    bool two1 = false, one1 = false;
    int ans = 0;
    cin>>prev;
    ans += prev;
    for(int i = 0; i < n-1; i++){
      cin>>curr;
      ans += curr;
      if(prev == -1 && curr == -1){
        two1 = true;
      }
      if(prev == 1 && curr == -1){
        one1 = true;
      }
      if(prev == -1 && curr == 1){
        one1 = true;
      }
      prev = curr;
    }
    if(two1){
      ans += 4;
    }
    else if(!one1 && !two1){
      ans -= 4;
    }
    cout<<ans<<endl;
  }

}
