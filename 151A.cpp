#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int a = (k*l)/nl;
  int b = c * d;
  int s = p / np;
  if( a <= b && a <= s){
    cout<<(a/n)<<endl;
    return 0;
  }
  if(b <= a && b <= s){
    cout<<(b/n)<<endl;
    return 0;
  }
  cout<<(s/n)<<endl;
  return 0;
}
