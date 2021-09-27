#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  int w, h, n;
  while(t--){
    cin>>w>>h>>n;
    int steps = 0;
    while(w%2 == 0 && w > 1){
      steps++;
      w /= 2;
    }
    while(h%2 == 0 && h > 1){
      steps++;
      h /= 2;
    }
    if(n <= pow(2, steps)){
      cout<<"YES"<<endl;
      continue;
    }
    cout<<"NO"<<endl;
  }
  return 0;
}
