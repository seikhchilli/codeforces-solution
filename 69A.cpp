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
  int arr[n][3];
  for(int i = 0; i < n; i++){
    cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
  }

  int sum = 0;
  for(int i = 0; i < 3; i++){
    sum = 0;
    for(int j = 0; j < n; j++){
      sum += arr[j][i];
    }
    if(sum){
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}
