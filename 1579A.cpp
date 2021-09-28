#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  string s;
  while(t--){
    cin>>s;
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < s.size(); i++){
      if(s[i] == 'A'){
        a++;
        continue;
      }
      if(s[i] == 'B'){
        b++;
        continue;
      }
      if(s[i] == 'C'){
        c++;
        continue;
      }
    }
    if(a + c == b){
      cout<<"YES"<<endl;
      continue;
    }
    cout<<"NO"<<endl;
  }
}
