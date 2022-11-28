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
    int n;
    cin>>n;
    int m;
    cin>>m;
    int rooks[m][2];
    for(int i = 0; i < m; i++){
      cin>>rooks[i][0]>>rooks[i][1];
    }
    if(m < n){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

  }

}
