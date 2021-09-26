#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    map<int, bool> inp;
    int x, k = 0;
    for(int i = 0; i < 2*n; i++){
      cin>>x;
      if(!inp[x]){
        arr[k] = x;
        inp[x] = true;
        k++;
      }
    }
    for(int i = 0; i < n; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}
