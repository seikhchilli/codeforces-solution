#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int totcount(string s, string t) {
    int count = 0;
    int l = s.length();
    while(s.length() > 0 && t.length() > 0) {
        if(s.back() == t.back()) {
            t.pop_back();
        }
        else {
            count++;
        }
        s.pop_back();
    }
    if(t.length() == 0){
      return count;
    }
    return l;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        if(s.length() < 2) {
            cout << s.length()<<endl;
        } else {
            cout<<min({totcount(s,"00"),totcount(s,"25"),totcount(s,"50"),totcount(s,"75")})<<endl;
        }
    }
  }
