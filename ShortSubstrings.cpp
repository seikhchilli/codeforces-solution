#include<iostream>
#include<string>
using namespace std;

int main(){
  int t;
  cin>>t;
  string s;
  while(t--){
    cin>>s;
    cout<<s[0];
    for(int i = 1; i < s.size();i += 2){
      cout<<s[i];
    }
    cout<<endl;
  }
}
