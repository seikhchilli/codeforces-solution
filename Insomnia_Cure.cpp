#include<iostream>
using namespace std;

int main(){
  int k, l, m, n, d;
  cin>>k>>l>>m>>n>>d;
  int i = 0, j = 1;
  while(j <= d){
    if(j % k == 0 || j % l == 0 || j % m == 0 || j % n == 0){
      i++;
    }
    j++;
  }
  cout<<i;
}
