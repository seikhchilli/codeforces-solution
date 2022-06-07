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
    int eve = 0, odd = 0;
    int x;
    while(n--){
      cin>>x;
      if(x % 2 == 0){
        eve++;
      }
      else{
        odd++;
      }
    }

    cout<<min(odd, eve)<<endl;
  }

}
