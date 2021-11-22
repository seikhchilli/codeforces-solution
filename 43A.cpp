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
  map<string, int> mp;
  while(n--){
    string s;
    cin>>s;
    mp[s]++;
  }
  int max = -1;
  string maxchar;
  map<string, int>::iterator i;
  for(i = mp.begin(); i != mp.end(); i++){
    if(max < i->second){
      max = i->second;
      maxchar = i->first;
    }
  }
  cout<<maxchar<<endl;

}
