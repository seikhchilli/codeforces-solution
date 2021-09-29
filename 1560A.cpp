#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    int ans;
    int i = 0, j = 1;
    while(i != n){
      if(j%3 != 0 && j % 10 != 3){
        ans = j;
        j++;
      }
      else{
        j++;
        continue;
      }
      i++;
    }
    cout<<ans<<endl;
  }
}
