n#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  int n;
  for(int i = 0; i < t; i++){
    cin>>n;
    if(n % 2 == 0){
      cout<<((n-1)/2)<<endl;
    }
    else{
      cout<<(n/2)<<endl;
    }
  }
  return 0;
}
