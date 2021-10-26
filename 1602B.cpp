#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t, n;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n];

    int max = -1;
    for(int i = 0; i < n; i++){
      cin>>arr[i];
      if(arr[i] > max){
        max = arr[i];
      }

    }
    int brr[max][n];

    for(int i = 0; i < n; i++){
      brr[0][i] = arr[i];
    }

    for(int j = 0; j < max; j++){
      unordered_map<int, int> mp;
      for (int i = 0; i < n; i++){
        mp[brr[j][i]]++;
      }
      for(int i = 0; i < n; i++){
        brr[j+1][i] = mp[brr[j][i]];
      }

    }

    int q, a, b;
    cin>>q;
    while(q-- ){
      cin>>a>>b;
      if(b < max){
        cout<<brr[b][a-1]<<endl;
      }
      else{
        cout<<brr[max][a-1]<<endl;
      }

    }
  }
}
