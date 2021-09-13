#include<iostream>
using namespace std;

int main(){
  int n, x, count = 0;
  cin>>n;
  int min, max, y;
  cin>>y;
  min = y;
  max = y;
  for(int i = 0; i < n-1; i++){
    cin>>x;
    if(x < min){
      min = x;
      count++;
    }
    if(x > max){
      max = x;
      count++;
    }
  }
  cout<<count;
}
