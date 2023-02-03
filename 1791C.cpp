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

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i = 0, j = n-1;
    while(i <= j){
      if(s[i] != s[j]){
        i++;
        j--;
      }
      else{
        break;
      }
    }
    cout<<(j-i)+1<<endl;
  }

}
