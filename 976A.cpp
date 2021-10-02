#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  string s;
  cin>>s;
  if(s == "0"){
    cout<<s<<endl;
    return 0;
  }
  int onecnt = 0;
  for(auto i : s){
    onecnt += (i - '0');
  }
  int zerocnt = n - onecnt;

  char s1[zerocnt+1];
  s1[0] = '1';
  int i = 1;
  for(int i = 1; i <= zerocnt; i++){
    s1[i] = '0';
  }
  s1[zerocnt + 1] = '\0';
  cout<<s1;
}
