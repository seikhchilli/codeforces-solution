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

    int arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }
    if(n == 1){
      cout<<0<<endl;
      continue;
    }

    int count = 0;
    int i = 0, j = 1;
    while(i < n-1 && j < n){
      if(arr[i] > arr[j]){
        count++;
        i += 2;
        j += 2;
      }
      else{
        i++;
        j++;
      }
    }
    cout<<count<<endl;
  }

}
