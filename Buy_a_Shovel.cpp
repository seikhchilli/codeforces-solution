#include<iostream>
using namespace std;

int main(){
  int n, k, i = 1;
  cin>>n>>k;
  int r = n;
  while(true){
    n = r * i;
    if(n%10 == 0 || n%10 == k){
      cout<<i<<endl;
      return 0;
    }
    i++;
  }
}
