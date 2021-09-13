#include<iostream>
#include<string>
using namespace std;

int main(){
  int t;
  cin>>t;
  string s;
  char elem;
  for(int i = 0; i < t; i++){
    cin>>s;
    elem = '4';
    int count = 0;
    for(int j = 0; j < s.size(); j++){
      if(s[j] != elem){
        elem = s[j];
        if(elem == '0'){
          count++;
          if(count == 2){
            break;
          }
          continue;
        }
      }
    }
    cout<<count<<endl;
  }

}
