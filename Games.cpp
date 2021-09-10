#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n][2], count = 0;
  for(int i = 0; i < n; i++){
    cin>>arr[i][0]>>arr[i][1];
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(arr[i][1] == arr[j][0]){
        count++;
      }
    }
  }
  cout<<count;
}
