#include<iostream>
#include<string>
using namespace std;

int main(){
  int t;
  cin>>t;
  string s[t];

  for(int i = 0; i < t; i++){

    cin>>s[i];

  }

  for(int i = 0; i < t; i++){
    if(s[i].size() > 10){
      cout<<s[i][0]<<s[i].size()-2<<s[i][s[i].size()-1]<<endl;
    }
    else{
        cout<<s[i]<<endl;
    }
  }
  return 0;
}
