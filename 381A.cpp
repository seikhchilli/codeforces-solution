#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  list <int> listn;
  int x;
  for(int i = 0; i < n; i++){
    cin>>x;
    listn.push_back(x);
  }
  int sereja = 0, dima = 0;
  bool turn = true;
  while(n--){
    turn = !turn;
    if(turn){
      if(listn.front() >= listn.back()){
        dima += listn.front();
        listn.pop_front();
        continue;
      }
      dima += listn.back();
      listn.pop_back();
      continue;
    }
    if(listn.front() >= listn.back()){
      sereja += listn.front();
      listn.pop_front();
      continue;
    }
    sereja += listn.back();
    listn.pop_back();
    continue;
  }
  cout<<sereja<<" "<<dima<<endl;
  return 0;

}
