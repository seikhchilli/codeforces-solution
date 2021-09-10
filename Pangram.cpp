#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;
  string su;
  cin>>su;
  transform(su.begin(), su.end(), su.begin(), ::tolower);
  int check = 0;
  char apl[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  for(int i = 0; i < 26; i++){
    check = 0;
    for(int j = 0; j < su.size(); j++){
      if(apl[i] == su[j]){
        check = 1;
        break;
      }
    }
    if(check == 0){
      cout<<"NO";
      return 0;
    }
  }
  cout<<"YES";
  return 0;
}
