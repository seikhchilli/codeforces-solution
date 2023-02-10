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
    if(n % 2 == 1) {
        cout<<"yes"<<endl;
        ll a = ceil(((double)n)/2);
        for(int i = 1; i < a+1; i++){
          cout<<(i+i-1)<<" "<<n-i+1+n<<endl;
        }

        for(int i = 1; i < a; i++){
          cout<<i+i<<" "<<n-a-i+1+n<<endl;
        }
    }
    else{
      cout<<"no"<<endl;
    }
  }

}
