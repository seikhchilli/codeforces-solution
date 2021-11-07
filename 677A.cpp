#include<iostream>
using namespace std;

int main(){
  int n, h, m, width = 0;
  cin>>n;
  cin>>h;
  for(int i = 0; i < n; i++){
    cin>>m;
    if(m > h){
      width += 2;
    }
    else{
      width++;
    }
  }
  cout<<width;
  return 0;
}
