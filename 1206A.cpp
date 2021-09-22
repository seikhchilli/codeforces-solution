#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m, maxx = 0, maxy = 0;
  cin>>n;
  int x;
  for(int i = 0; i < n; i++){
    cin>>x;
    maxx = x > maxx ? x : maxx;
  }
  cin>>m;
  for(int i = 0; i < m; i++){
    cin>>x;
    maxy = x > maxy ? x : maxy;
  }
  cout<<maxx<<" "<<maxy<<endl;
  return 0;
}
