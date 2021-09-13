#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  int x, s, n;
  for(int i = 0; i < t; i++){
    cin>>n>>s;
    if(n%2 == 0){
      x = s/((n/2) + 1);
    }
    else{
      x = s/((n+1)/2);
    }
    cout<<x<<endl;
  }
}
