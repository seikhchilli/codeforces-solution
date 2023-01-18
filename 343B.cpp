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

  for(int i = 0; i < s.size(); i++){
    if(!st.empty() && st.top() == s[i]){
      st.pop();
    }
    else{
      st.push(s[i]);
    }
  }
  if(st.empty()){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }

}
