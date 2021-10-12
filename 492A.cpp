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

  int count = 0;
  int pre = 0;
  int i = 1;
  while(n >= pre + i){
    count++;
    n -= pre + i;
    pre = pre + i;
    i++;
  }
  cout<<count<<endl;
}
