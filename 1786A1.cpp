#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl "\n"
#define debug(n) cout<<(n)<<endl;
#define pb push_back
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int count = 1;
    long long alice = 0, bob = 0;
    bool flag = true;
    while(n > 0){
      if(flag){
        if(n - count > 0){
          alice += count;
          n -= count;
          count++;
        }
        else{
          alice += n;
          n = 0;
        }
        if(n - count > 0){
          bob += count;
          n -= count;
          count++;
        }
        else{
          bob += n;
          n = 0;
        }
        flag = !flag;
      }
      else{
        if(n - count > 0){
          bob += count;
          n -= count;
          count++;
        }
        else{
          bob += n;
          n = 0;
        }
        if(n - count > 0){
          alice += count;
          n -= count;
          count++;
        }
        else{
          alice += n;
          n = 0;
        }
        flag = !flag;
      }
    }
    cout<<alice<<" "<<bob<<endl;
  }

}
