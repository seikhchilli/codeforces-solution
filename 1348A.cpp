#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  int n;
  int arr[30];
  int r = 2;
  for(int i = 0; i < 30; i++){
    arr[i] = r;
    r *= 2;
  }
  while(t--){
    cin>>n;
    int asum(0), bsum(0);
    for(int i = 0; i < n/2-1; i++){
      asum += arr[i];
    }
    asum += arr[n-1];
    for(int i = n/2 - 1; i < n-1; i++){
      bsum += arr[i];
    }
    int diff = asum - bsum >= 0 ? (asum - bsum) : (bsum - asum);
    cout<<diff<<endl;
  }
  return 0;
}
