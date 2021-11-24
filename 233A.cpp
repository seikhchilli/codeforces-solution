#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  if (n % 2 == 1)
  {
      cout << -1 << endl;
  }
  else
  {
      cout << "2 1";
      for (int i = 3; i < n; i += 2)
      {
          cout << " " << i + 1 << " " << i;
      }
      cout << endl;
  }
  return 0;

}
