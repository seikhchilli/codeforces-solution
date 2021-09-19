#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
  int t;
  cin>>t;
  int n, check;
  string s;
  while(t--){
    cin>>n;
    cin>>s;
    char s2[n], elem = s[0];
    int k = 0;
    check = 0;
    for(int i = 0; i < n; i++){
      if(s[i] != elem){
        s2[k] = elem;
        elem = s[i];
        k++;
      }
      for(int j = 0; j < k; j++){
        if(s[i] == s2[j]){
          cout<<"NO"<<endl;
          check = 1;
          break;
        }
      }
      if(check == 1){
        break;
      }
    }
    if(check == 0){
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
