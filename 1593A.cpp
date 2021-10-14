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
  int a, b, c;
  while(t--){
    cin>>a>>b>>c;
    if(a > b && a > c){
      cout<<(a - a)<<" "<<( a- b + 1)<<" "<<(a - c + 1)<<endl;
      continue;
    }
    if(b > a && b > c){
      cout<<(b - a + 1)<<" "<<( b- b)<<" "<<(b - c + 1)<<endl;
      continue;
    }
    if(c > a && c > b){
      cout<<(c - a + 1)<<" "<<( c- b + 1)<<" "<<(c - c)<<endl;
      continue;
    }
    if(a == b && a > c){
      cout<<(a - a + 1)<<" "<<( a- b + 1)<<" "<<(a - c + 1)<<endl;
      continue;
    }
    if(b == c && b > a){
      cout<<(b - a + 1)<<" "<<( b- b + 1)<<" "<<(b - c + 1)<<endl;
      continue;
    }
    if(c == a && c > b){
      cout<<(c - a + 1)<<" "<<( c- b + 1)<<" "<<(c - c + 1)<<endl;
      continue;
    }
    if(a == b && b == c){
      cout<<1<<" "<<1<<" "<<1<<endl;
      continue;
    }
  }

}
