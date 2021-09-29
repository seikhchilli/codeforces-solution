#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  char elem = '2';
  int maxi = 0, count = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] != elem){
      elem = s[i];
      count = 1;
      continue;
    }
    count++;
    maxi = count > maxi ? count : maxi;
    if(maxi == 7){
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
  return 0;
}
