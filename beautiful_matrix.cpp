#include<iostream>
using namespace std;

int absol(int m){
  if(m >= 0){
    return m;
  }
  return (m * -1);
}

int main(){
  int arr[5][5];
  int m, n;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      cin>>arr[i][j];
      if(arr[i][j] == 1){
        m = i; n = j;
      }
    }
  }
  int path = absol(m - 2) + absol(n - 2);
  cout<<path;
  return 0;
}
