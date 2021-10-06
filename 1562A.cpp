#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  int l, r;

  while(t--){
    cin>>l;
    cin>>r;

    if(r/2 < l){
      cout<<(r%l)<<endl;
    }
    else{
      cout<<(r%((r/2)+1))<<endl;
    }

  }
  return 0;
}
