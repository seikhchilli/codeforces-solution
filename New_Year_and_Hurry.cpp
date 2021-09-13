#include<iostream>
using namespace std;

int main(){
  int n, k;
  cin>>n;
  cin>>k;
  int sum = 0;
  int i;
  for(i = 1; i <= n; i++){
    if(sum + (5 * i) > (240 -k)){
      break;
    }
    sum += (5 * i);
  }
  i--;
  cout<<i;

}
