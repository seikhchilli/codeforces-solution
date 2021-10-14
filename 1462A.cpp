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
  int n;
  while(t--){
    cin>>n;
    deque <int> drr;
    int x;
    for(int i = 0; i < n; i++){
      cin>>x;
      drr.push_back(x);
    }
    bool check = false;
    for(int i = 0; i < n; i++){
      check = !check;
      if(check){
        cout<<drr.front()<<" ";
        drr.pop_front();
      }
      else{
        cout<<drr.back()<<" ";
        drr.pop_back();
      }
    }
    cout<<endl;
  }

}
