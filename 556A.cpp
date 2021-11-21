#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  string s;
  cin>>s;
  int count1 = 0, count0 = 0;
  for(auto i : s){
    (i == '1') ? count1++ : count0++;
  }
  cout<<abs(count0 - count1)<<endl;

}
