#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  int parr[n];
  for(int i = 0; i < n; i++){
    cin>>arr[i];
    parr[arr[i]-1] = i+1;
  }
  for(int i = 0; i < n; i++){
    cout<<parr[i]<<" ";
  }
}
