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
  stack<char> st;

  string s;
  cin>>s;

  for(int i = s.size() - 1; i >= 0; i--){
    if(!st.empty() && st.top() == s[i]){
      st.pop();
    }
    else{
      st.push(s[i]);
    }
  }

  string ans = "";
  while(!st.empty()){
    ans.push_back(st.top());
    st.pop();
  }
  cout<<ans<<endl;

}
