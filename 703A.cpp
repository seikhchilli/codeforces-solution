#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b, asum = 0, bsum = 0;
  cin>>n;
  while(n--){
    cin >> a >> b;
    if(a > b){
      asum++;
      continue;
    }
    if(b > a){
      bsum++;
      continue;
    }
  }
  if(asum > bsum){
    cout<<"Mishka"<<endl;
    return 0;
  }
  if(bsum > asum){
    cout<<"Chris"<<endl;
    return 0;
  }
  cout<<"Friendship is magic!^^"<<endl;
  return 0;

}
