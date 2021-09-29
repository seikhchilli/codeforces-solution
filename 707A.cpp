#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin>>n>>m;
  char x;
  for(int i = 0; i < (n*m); i++){
    cin>>x;
    if(x != 'B' && x != 'W' && x != 'G'){
      cout<<"#Color"<<endl;
      return 0;
    }
  }
  cout<<"#Black&White"<<endl;
  return 0;
}
