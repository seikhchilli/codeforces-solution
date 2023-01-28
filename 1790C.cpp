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
    vector<int> freq(n+1, 0);
    int arr[n][n-1];
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n-1; j++){
        cin>>arr[i][j];
      }
      freq[arr[i][0]]++;
    }
    int k = -1;
    for(int i = 1; i <=n; i++){
      if(freq[i] == n-1) k = i;
    }
    cout<<k<<" ";
    for(int i = 0; i < n; i++){
      if(arr[i][0] != k){
        for(int j = 0; j < n-1; j++){
          cout<<arr[i][j]<<" ";
        }
        break;
      }
    }
    cout<<endl;
  }

}
