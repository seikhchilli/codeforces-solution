#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int m, n;
  cin>>m>>n;
  int a = min(m, n);
  if(a %2 == 0){
    cout<<"Malvika"<<endl;
  }
  else{
    cout<<"Akshat"<<endl;
  }


}
