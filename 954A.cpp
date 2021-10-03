#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;

  char a[n];
  cin>>a;

  int seq = 0;

  for(int i = 0; i < n - 1; i++){

    if(a[i] != a[i+1]){
      seq++;
      i++;
      continue;
    }

  }
  cout<<(n - seq);
}
