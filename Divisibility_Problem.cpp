#include<iostream>
using namespace std;

int main(){
  int t, a, b;
  cin>>t;
  for(int j = 0; j < t; j++){
    cin>>a;
    cin>>b;
    if(a % b == 0){
      cout<<0<<endl;
      continue;
    }
    cout<<(b - (a%b))<<endl;
  }

}
