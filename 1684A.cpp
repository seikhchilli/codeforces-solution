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
    int n, k;
    cin>>n;
    int count = 0;
    int min = 10;
    k = n;
    while(k > 0){
      count++;
      if(k % 10 < min){
        min = k % 10;
      }
      k /= 10;
    }
    if(count == 2){
      cout<<(n%10)<<endl;
    }
    else{
      cout<<min<<endl;
    }
  }

}
