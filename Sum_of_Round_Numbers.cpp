#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    int count = 0;
    int arr[n], i = 0;
    while(n){
      arr[i] = n%10;
      n /= 10;
      count += arr[i] == 0 ? 0 : 1;
      i++;
    }
    cout<<count<<endl;
    for(int j = 0; j < i; j++){
      if(arr[j] != 0){
        cout<<arr[j] * pow(10, j)<<" ";
      }
    }
    cout<<endl;
  }
}
