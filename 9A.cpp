#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b;
  cin>>a>>b;
  if(max(a, b) == 1){
    cout<<"1/1"<<endl;
  }
  else if(max(a, b) == 2){
    cout<<"5/6"<<endl;
  }
  else if(max(a,b) == 3){
    cout<<"2/3"<<endl;
  }
  else if(max(a, b) == 4){
    cout<<"1/2"<<endl;
  }
  else if(max(a, b) == 5){
    cout<<"1/3"<<endl;
  }
  else{
    cout<<"1/6"<<endl;
  }

}
