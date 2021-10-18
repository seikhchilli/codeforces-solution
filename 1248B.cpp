#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  deque <ll> deck;
  ll x;
  for(int i = 0; i < n; i++){
    cin>>x;
    deck.push_back(x);
  }
  sort(deck.begin(), deck.end(), greater<int>());

  ll hz = 0;
  ll vt = 0;
  bool check = false;
  for(int i = 0; i < n; i++){
    check = !check;
    if(check){
      hz += deck.front();
      deck.pop_front();
    }
    else{
      vt += deck.back();
      deck.pop_back();
    }
  }
  ll dist = hz * hz + vt * vt;
  cout<<dist<<endl;

}
