#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  long long n;
  while(t--){
    cin>>n;
    int cnt3 = 0, cnt2 = 0;
    int k = n;
    while(k % 3 == 0 && k > 1){
      k /= 3;
      cnt3++;
    }
    while(k % 2 == 0 && k > 1){
      k /= 2;
      cnt2++;
    }
    if(k != 1){
      cout<<-1<<endl;
      continue;
    }
    if(cnt3 < cnt2){
      cout<<-1<<endl;
      continue;
    }
    int cnt6 = cnt3 - cnt2;
    n *= pow(2, cnt6);
    while(n>1){
      n /= 6;
      cnt6++;
    }
    cout<<cnt6<<endl;
    continue;
  }
  return 0;
}
