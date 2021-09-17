#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  cin>>n>>k;
  int x, count = 0, team;
  for(int i = 0; i < n; i++){
    cin>>x;
    count += x <= (5-k) ? 1 : 0;
  }
  team = count/3;
  cout<<team;
}
