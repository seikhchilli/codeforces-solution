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
    string s, k;
    cin>>s;
    k = s;
    sort(s.begin(), s.end());
    int arr[n];
    int m = 0;
    for(int i = 0; i < s.length(); i++){
      if(k[i] != s[i]){
        arr[m] = i+1;
        m++;
      }
    }
    if(m != 0){
      cout<<1<<endl;
    }
    cout<<m<<" ";
    for(int i = 0; i < m; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}
