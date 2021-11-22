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
    int n, d;
    cin>>n>>d;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }
    sort(arr, arr+n);
    if(arr[n-1] <= d){
      cout<<"YES"<<endl;
    }
    else if(arr[0] + arr[1] <= d){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }

}
