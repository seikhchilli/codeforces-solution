#include<bits/stdc++.h>
using namespace std;



int main(){
  const unsigned int M = 1000000007;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    unsigned long long fact = 1;
    for(int i = 1; i <= n*2; i++){
      fact = (fact * i)%M;
      fact = fact%M;
    }
    cout<<(fact*500000004)%M<<endl;
  }

}
