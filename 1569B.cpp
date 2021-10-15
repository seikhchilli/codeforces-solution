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
    string a;
    cin>>a;
    int count = 0;
    for(int i = 0; i < n; i++){
      if(a[i] == '2'){
        count++;
      }
    }
    if(count == 1 || count == 2){
      cout<<"NO"<<endl;
      continue;
    }
    char arr[n][n];
    bool check;
    for(int i = 0; i < n; i++){
      check = true;
      for(int j = i; j < n; j++){
        if(i == j){
          arr[i][j] = 'X';
          continue;
        }
        else if((a[i] == '1' && a[j] == '1') || (a[i] == '1' && a[j] == '2') || (a[i] == '2' && a[j] == '1')){
          arr[i][j] = '=';
          arr[j][i] = '=';
          continue;
        }
        else if(a[i] == '2' && a[j] == '2'){
           if(check){
             check = false;
             arr[i][j] = '+';
             arr[j][i] = '-';
           }
           else{
             arr[i][j] = '-';
             arr[j][i] = '+';
           }
           continue;
        }
      }
    }
    cout<<"YES"<<endl;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cout<<arr[i][j];
      }
      cout<<endl;
    }
  }

}
