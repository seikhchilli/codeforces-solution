#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl "\n"
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    int n, m;
    cin>>n>>m;
    int check = 0;
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= m; j++){
        if((i + 2 <= n && j+1 <= m)||(i + 2 <= n && j-1 >= 1)||(i-2 >= 1 && j +1 <= m)||(i-2 >= 1 && j -1 >= 1)
          ||(j+2 <= m && i+1 <= n) || (j+2 <= m && i-1 >= 1) ||(j-2 >= 1 && i +1 <= n)||(j-2 >= 1 && i -1 >= 1)){
            continue;
          }
        else{
          cout<<i<<" "<<j<<endl;
          check = 1;
        }
        if(check){
          break;
        }
      }
      if(check){
        break;
      }
    }
    if(!check){
      cout<<1<<" "<<1<<endl;
    }
  }

}
