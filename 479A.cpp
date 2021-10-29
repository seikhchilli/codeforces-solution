#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll a, b, c;
  cin>>a>>b>>c;
  ll max = -1;
  ll arr[] = {(a*b*c), (a + b + c), (a + b * c), (a * b + c), ((a +b)*c), (a*(b + c))};
  for(auto i : arr){
    max = (i > max) ? i : max;
  }
  cout<<max<<endl;
}
