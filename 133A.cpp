#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin>>s;
  for(auto i:s){
    if(i == 'H' || i == 'Q' || i == '9'){
      cout<<"YES\n";
      return 0;
    }
  }
  cout<<"NO\n";
  return 0;

}
