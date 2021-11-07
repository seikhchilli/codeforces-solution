#include<iostream>
#include<string>
using namespace std;

int main(){
  string s, t;
  cin>>s;
  cin>>t;
  int check = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] != t[t.size() - i -1]){
      check = -1;
    }
  }
  if(check == 0){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  return 0;
}
