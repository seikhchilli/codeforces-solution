#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;

  int arr[n][n];

  map<int, bool> mp;

  for(int i = 0; i< n; i++){
    for(int j = 0; j< n; j++){
      cin>>arr[i][j];
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      if(arr[i][j] == 1){
        mp[i] = true;
        continue;
      }
      if(arr[i][j] == 2){
        mp[j] = true;
        continue;
      }
      if(arr[i][j] == 3){
        mp[i] = mp[j] = true;
      }

    }
  }

  int arrb[n], k = 0;
  for(int i = 0; i < n; i++){
    if(!mp[i]){
      arrb[k] = i + 1;
      k++;
    }
  }
  cout<<k<<'\n';
  for(int i = 0; i < k; i++){
    cout<<arrb[i]<<" ";
  }
}
