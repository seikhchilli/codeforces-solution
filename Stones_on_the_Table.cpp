#include<iostream>
#include<string>
using namespace std;

int main(){
  int n, count = 0;
  cin>>n;
  string s;
  cin>>s;
  for(int i = 0; i < n-1; i++){
    if(s[i] == s[i+1]){
      count++;
    }
  }
  cout<<count;
  return 0;
}
