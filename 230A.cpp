#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int s, n;
  cin>>s>>n;
  multimap <int, int> mp;
  int a, b;
  for(int i = 0; i < n; i++){
    cin>>a>>b;
    mp.insert(pair <int, int> (a, b));
  }
  for(auto i = mp.begin(); i != mp.end(); i++){
    if(s > i->first){
      s += i->second;
    }
    else{
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;

}
