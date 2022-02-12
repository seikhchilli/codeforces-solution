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
    cin>>n>>k;
    vector<pair<int, int> > vect(n);
    for(int i = 0; i < n; i++){
      cin>>vect[i].first;
    }
    for(int i = 0; i < n; i++){
      cin>>vect[i].second;
    }
    sort(vect.begin(), vect.end());
    for(int i = 0; i < n; i++){
      if(vect[i].first > k){
        break;
      }
      k += vect[i].second;
    }
    cout<<k<<endl;
  }

}
