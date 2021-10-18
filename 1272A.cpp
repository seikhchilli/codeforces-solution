#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a, a+3);
    if(a[0] == a[1] && a[2] != a[1]){
      if(a[2] - a[1] > 1){
        a[2] -= 1;
      }
      a[0] = a[0] + 1;
      a[1] = a[1] + 1;
    }
    else if(a[2] == a[1] && a[0] != a[1]){
      if(a[1] - a[0] > 1){
        a[0] += 1;
      }
      a[2] = a[2] - 1;
      a[1] = a[1] - 1;
    }
    else if(a[2] != a[1] && a[0] != a[1]){
      a[0] += 1;
      a[2] -= 1;
    }
    int dista = (a[0] - a[1] >= 0) ? (a[0] - a[1]) : (a[1] - a[0]);
    int distb = (a[1] - a[2] >= 0) ? (a[1] - a[2]) : (a[2] - a[1]);
    int distc = (a[0] - a[2] >= 0) ? (a[0] - a[2]) : (a[2] - a[0]);
    cout<<(dista + distb + distc)<<endl;
  }

}
