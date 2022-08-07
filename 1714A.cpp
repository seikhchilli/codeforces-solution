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
    int H, M;
    cin>>H>>M;
    int h, m;
    int timeh, timem, mintimeh = 24, mintimem = 60;
    while(n--){
      cin>>h>>m;
      timeh = h - H;
      timem = m - M;
      if(timem < 0){
        timem += 60;
        timeh--;
      }
      if(timeh < 0){
        timeh += 24;
      }
      if(timeh < mintimeh){
        mintimeh = timeh;
        mintimem = timem;
      }
      else if(timeh == mintimeh && timem < mintimem){
        mintimem = timem;
      }

    }
    cout<<mintimeh<<" "<<mintimem<<endl;

  }

}
