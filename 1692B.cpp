#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
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
    set<int> st;
    for(int i = 0; i < n; i++){
      cin>>arr[i];
      st.insert(arr[i]);
    }
    int sub = n - st.size();
    if(sub%2){
      sub++;
    }
    cout<<n-sub<<endl;


  }

}
