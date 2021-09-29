#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  string s;
  while(t--){
    cin>>s;
    int a = 0, b = 0, c = 0;
    for(auto i : s){

      if(i == 'A'){
        a++;
        continue;
      }
      if(i == 'B'){
        b++;
        continue;
      }
      if(i == 'C'){
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
