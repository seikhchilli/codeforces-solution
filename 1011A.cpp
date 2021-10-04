#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin>>n>>k;
  string s;
  cin>>s;
  sort(s.begin(), s.end());

  int sum = s[0] - 'a' + 1;
  k--;
  char prev = s[0];
  for(int i = 1; i < n; i++){
    if(!k){
      break;
    }
    if(s[i] - prev >= 2){
      prev = s[i];
      sum += s[i] - 'a' + 1;
      k--;
    }
  }
  if(!k){
    cout<<sum<<endl;
    return 0;
  }
  cout<<-1;

}
