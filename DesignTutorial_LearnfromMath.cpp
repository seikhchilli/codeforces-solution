#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  if(n%2 == 0){
    cout<<(n-4)<<" "<<4;
  }
  else{
    cout<<(n-9)<<" "<<9;
  }
}
