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
    multiset<int> st;
    int x;
    for(int i = 0; i < n; i++){
      cin>>x;
      st.insert(x);
    }
    int ans = 0;
    while(!st.empty()){
      int i = *st.begin();
      ans++;
      for(int j = i; ; j++){
        auto k = st.find(j);
        if(k == st.end()){
          break;
        }
        else{
          st.erase(k);
        }
      }
    }
    cout<<ans<<endl;
  }

}
