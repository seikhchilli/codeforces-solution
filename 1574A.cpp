#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    char arr[2*n];
    for(int i = 0; i < 2*n; i++){
      if(i % 2 == 0){
        arr[i] = '(';
        continue;
      }
      arr[i] = ')';
    }
    for(int i = 0; i < 2*n; i++){
      cout<<arr[i];
    }
    cout<<endl;
    char temp;
    for(int i = 1; i <= n-1; i++){
      temp = arr[i];
      arr[i] = arr[2*n - 1 - i];
      arr[2*n - 1 - i] = temp;
      for(int j = 0; j < 2*n; j++){
        cout<<arr[j];
      }
      cout<<endl;
    }
  }
  return 0;
}
