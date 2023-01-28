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
    int n, s, r;
    cin>>n>>s>>r;
    int m = s - r;
    int arr[n];
    for(int i = 0; i < n; i++){
      arr[i] = 1;
    }
    s -= n;
    int i = 0;
    while(s > 0){
      if(s >= m){
        arr[i] = m;
        s -= (m-1);
      }
      else{
        arr[i] += s;
        s = 0;
      }
      i++;
    }
    for(int i = 0; i < n; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }

}
