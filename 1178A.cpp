#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  int arr[n];
  int seats = 0;
  for(auto i = 0; i < n; i++){
    cin>>arr[i];
    seats += arr[i];
  }
  int party = arr[0];
  int coalition = party, k = 0, i = 0;
  int arrn[n];
  int cvheck = 0;
  while(i < n-1){
    i++;
    if(arr[i] <= party/2){
      coalition += arr[i];
      arrn[k] = i;
      k++;
    }
  }
  if(coalition <= seats/2){
    cout<<0<<endl;
    return 0;
  }
  cout<<k+1<<endl;
  cout<<1<<" ";
  for(auto i = 0; i < k; i++){
    cout<<arrn[i]+1
     <<" ";
  }
}
