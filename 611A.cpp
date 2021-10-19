#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string b, s;
  int n;
  int days = 0;
  cin>>n>>b>>s;
  if(s[0] == 'm'){
    if(n == 31){
      cout<<7<<endl;
    }
    else if(n == 30){
      cout<<11<<endl;
    }
    else{
      cout<<12<<endl;
    }
  }
  else if(s[0] == 'w'){
    if(n == 6 || n == 5){
      cout<<53<<endl;
    }
    else{
      cout<<52<<endl;
    }
  }

}
