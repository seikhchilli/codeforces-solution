#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  float x, sum = 0;
  for(int i = 0; i < n; i++){
    cin>>x;
    sum += x;
  }
  float aver = sum / n;
  cout<<aver;
}
