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
  int n, m;
  while(t--){
    cin>>n>>m;
    int lights;
    lights = (n*m)%2 == 0 ? ((n * m) / 2) : (((n * m) / 2) + 1);
    cout<<lights<<endl;
  }

}
