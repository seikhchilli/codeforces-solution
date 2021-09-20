#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
      if(i == 0 && arr[i] != arr[i+1] && arr[i] != arr[i+2] ){
        cout<<(i+1)<<endl;
        break;
      }
      if(i == 0 && arr[i] != arr[i+1] && arr[i] == arr[i+2] ){
        continue;
      }
      if(i == n-1){
        cout<<(i+1)<<endl;
        break;
      }
      if(arr[i] != arr[i+1] && arr[i] != arr[i-1]){
        cout<<(i+1)<<endl;
        break;
      }
    }
  }
  return 0;
}
