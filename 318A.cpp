#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned long long n, m;
  cin>>n>>m;
  if(n & 1){
    (m <= (n/2 + 1)) ? cout<<(2 * m - 1)<<endl : cout<<(2*(m - (n/2 + 1)))<<endl;
    return 0;
  }
  (m <= n/2) ? cout<<(2 * m - 1)<<endl : cout<<(2*(m - n/2))<<endl;
  return 0;
}
