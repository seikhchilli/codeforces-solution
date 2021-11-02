#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string a;
  cin>>a;
  string arr[5];
  for(int i = 0; i < 5; i++){
    cin>>arr[i];
  }
  for(int i = 0; i < 5; i++){
    if(a[0] == arr[i][0]){
      cout<<"YES"<<endl;
      return 0;
    }
  }

  for(int i = 0; i < 5; i++){
    if(a[1] == arr[i][1]){
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
}
