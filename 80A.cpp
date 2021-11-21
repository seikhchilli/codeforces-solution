#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

bool prime_check(int m){

  if(m % 2 == 0){
    return false;
  }
  bool check = true;
  for(int i = 2; i*i <= m; i++){
    if(m % i == 0){
      check = false;
      break;
    }
  }
  return check;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin>>n>>m;

  int real_m;
  for(int i = n+1; i <= m; i++){
    if(prime_check(i)){
      real_m = i;
      break;
    }
  }

  (real_m == m) ? cout<<"YES"<<endl : cout<<"NO"<<endl;



}
