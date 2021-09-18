#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int x;
    int evcnt = 0, oddcnt = 0;
    for(int i = 0; i < n; i++){
      cin>>x;
      if(x%2 == 0 && i%2 != 0){
        evcnt++;
      }
      if(x%2 != 0 && i % 2 == 0){
        oddcnt++;
      }
    }
    if(evcnt == oddcnt){
      cout<<evcnt<<endl;
      continue;
    }
    cout<<-1<<endl;
  }
}
