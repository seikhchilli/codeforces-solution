#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin>>s;
  int count = 0;
  char prev = 'a';
  for(auto i : s){
    int a = abs(i - prev);
    int b = 26 - a;

    count += min(a, b);
    prev = i;
  }
  cout<<count<<endl;
}
