#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  int n;
  while(t--){
    deque <int> deqs;
    cin>>n;
    int x;
    for(int i = 0; i < n;i++){
      cin>>x;
      if(x > deqs.front()){
        deqs.push_back(x);
        continue;
      }
      deqs.push_front(x);
    }
    for(int i = 0; i < n; i++){
      cout<<deqs.at(i)<<" ";
    }
    cout<<endl;
  }
}
