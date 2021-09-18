#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    int arr[n];
    int mina = 0x3f3f3f3f;
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i = 1; i < n; i++){
      mina = min(mina, (arr[i] - arr[i-1]));
    }
    cout<<mina<<endl;
  }
  return 0;
}
