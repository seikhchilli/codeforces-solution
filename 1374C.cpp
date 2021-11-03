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
    string s;
    cin>>s;
    stack<char> st;
    int count = 0;
    for(auto i : s){
      if(i == ')' && !st.empty()){
        st.pop();
        continue;
      }
      if(i == ')' && st.empty()){
        count++;
        continue;
      }
      st.push(i);
    }
    cout<<count<<endl;
  }
}
