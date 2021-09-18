#include<bits/stdc++.h>
using namespace std;

int main(){
  int t, n, k;
  cin>>t;
  while(t--){
    cin>>n>>k;
    int arr1[n], arr2[n];
    int temp;
    for(int i = 0; i < n; i++){
      cin>>arr1[i];
    }
    for(int i = 0; i < n; i++){
      cin>>arr2[i];
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+n, greater<int>());
    for(int i = 0; i < k; i++){
      if(arr1[i] < arr2[i]){
        arr1[i] = arr2[i];
        continue;
      }
      else{
        break;
      }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
      sum += arr1[i];
    }
    cout<<sum<<endl;
  }
}
