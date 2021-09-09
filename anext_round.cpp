#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int k;
  cin>>k;
  int arr[n], quali, count = 0;
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  quali = arr[k-1];

  for(int i = 0; i < n; i++){
    if(arr[i] >= quali && arr[i] > 0){
      count++;
    }
  }
  cout<<count;
  return 0;
}
