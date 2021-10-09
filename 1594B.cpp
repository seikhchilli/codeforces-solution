#include<bits/stdc++.h>
#include<bitset>
using namespace std;

long long MOD = 1e9 + 7;
#define ll long long
#define ull unsigned long long
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

ull mypow(ull n, ull i) {

    ull res = 1;
    ull k = n;
    while(i--){
      res = (res%MOD * k % MOD)%MOD;
    }
    return (res%MOD);
}

ull binary(ull arr[], ull n){
    ull i = 0;
    while (n > 0) {
      arr[i] = n % 2;
      n = n / 2;
      i++;
  }
  return i;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  ull n, k;
  while(t--){
    cin>>n>>k;
    ull ans = 0;

    ull s[32];
    ull bit = binary(s, k);
    for(ull i=0;i< bit;i++){
        if(s[i]== 1){
            ans = (ans + mypow(n,i)%MOD);
        }
    }
    cout<<(ans%MOD)<<endl;
  }
}
