#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    (n / 2020 >= n % 2020) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
  }
  }
