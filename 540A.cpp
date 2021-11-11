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
  string s, t;
  cin>>s>>t;
  int count = 0;
  for(int i = 0; i < n; i++){
    int a = s[i] - '0';
    int b = t[i] - '0';
    int g = min(a, b);
    int h = max(a, b);
    int c = min(h - g, (g + 10 - h));
    count += c;
  }
  cout<<count<<endl;

}
