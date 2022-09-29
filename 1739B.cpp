#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl "\n"
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
    int drr[n];
    for(int i = 0; i < n; i++){
      cin>>drr[i];
    }
    int arr[n];
    int check = 0;
    arr[0] = drr[0];
    for(int i = 1; i < n; i++){
      int a = arr[i-1] + drr[i];
      int b = arr[i-1] - drr[i];
      if((a > 0 && b > 0) && (a != b)){
        cout<<-1<<endl;
        check = 1;
        break;
      }
      else{
        if(a > 0){
          arr[i] = a;
        }
        else{
          arr[i] = b;
        }
      }
    }
    if(check){
      continue;
    }
    else{
      for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
  }
}
