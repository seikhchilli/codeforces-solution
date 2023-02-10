#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl "\n"
#define debug(n) cout<<(n)<<endl;
#define pb push_back
const ll INF = 2e18 + 99;

int sum(int n){
  int ans = 0;
  while(n){
    ans += n % 10;
    n /= 10;
  }
  return ans;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int i = 0;
    bool check = false;
    int ndigts[10];
    while(n){
        ndigts[i++] = n%10;
        n /= 10;
    }
    vector<int> x(10);
    vector<int> y(10);
    for(int j = 0;j < i;j++) {
        if(ndigts[j] & 1) {
            x[j] = ndigts[j]/2 + check;
            y[j] = ndigts[j]/2 + 1 - check;
            check = 1 - check;
        }
        else{
          x[j] = ndigts[j] / 2;
          y[j] = ndigts[j] - x[j];
        }
    }
    int l = 0, m = 0, u = 1;
    for(int j = 0; j < i; j++) {
        m += y[j]*u;
        l += x[j]*u;
        u *= 10;
    }
    cout<<l<<" "<<m<<endl;
  }
}
