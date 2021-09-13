#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }
    sort(arr, arr+n);
    int count = n;
    for(int i = 0; i < n-1; i++){
      if(arr[i] == arr[i+1] || arr[i+1] - arr[i] == 1){
        count--;
      }
    }
    if(count != 1){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
}
