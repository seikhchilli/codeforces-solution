#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin>>n>>m;
  int count = 0;
  while(n != 0){
    count++;
    n--;
    if(count % m == 0){
      n++;
    }
  }
  cout<<count<<endl;

}
