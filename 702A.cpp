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
  int prev, current;
  cin>>prev;
  int maxlen = 1, count = 1;
  for(int i = 0; i < n-1; i++){
    cin>>current;
    if(current <= prev){
      count = 1;
      prev = current;
      continue;
    }
    count++;
    if(maxlen < count){
      maxlen = count;
    }
    prev = current;
  }

  cout<<maxlen<<endl;

}
