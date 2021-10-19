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
  for(int i = 1; i < n; i++){
    (n % i == 0) ? count++ : count+=0;
  }
  cout<<count<<endl;

}
