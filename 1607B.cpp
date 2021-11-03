#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin>>t;
  while(t--){
    ll n, moves;
    cin>>n>>moves;
    if(n % 2 == 0){
      if(moves % 4 == 0){
        cout<<n<<endl;
        continue;
      }
      if(moves % 4 == 1){
        cout<<(n - moves)<<endl;
      }
      if(moves % 4 == 2){
        cout<<(n - (moves - 1) + moves)<<endl;
        continue;
      }
      if(moves % 4 == 3){
        cout<<(n - (moves - 2) + (moves - 1) + moves)<<endl;
        continue;
      }
    }
    else{
      if(moves % 4 == 0){
        cout<<n<<endl;
        continue;
      }
      if(moves % 4 == 1){
        cout<<(n + moves)<<endl;
        continue;
      }
      if(moves % 4 == 2){
        cout<<(n + (moves - 1) - moves)<<endl;
        continue;
      }
      if(moves % 4 == 3){
        cout<<(n + (moves - 2) - (moves - 1) - moves)<<endl;
        continue;
      }
    }
  }

}
