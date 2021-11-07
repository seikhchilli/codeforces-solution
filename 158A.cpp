#include<iostream>
using namespace std;

int main(){
  int n;
  int k;
  int count;
  cin>>n;
  cin>>k;
  int arr[n];
  for(int i = 0; i < n; i++){
    cout<<"i:"<<i<<" ";
    cin>>arr[i];
  }
  int quali = 0, m;
  if(arr[k-1] == 0){

    for(m = k-2; m >= 0; m--){

      if(arr[m] > 0){
      
        quali = arr[m];
        count  = m+1;
        cout<<count;
        return 0;
      }
    }
    if(quali == 0){
      cout<<0;
      return 0;
    }
  }
  else{
    quali = arr[k-1];
    count = k;
  }
  cout<<endl;
  int j = count-2;
  while(true){
    if(arr[j] == quali){
      count++;
    }
    else{
      break;
    }
    j--;
  }
  cout<<count;
  return 0;
}
