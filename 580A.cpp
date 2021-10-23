#include<bits/stdc++.h>
#include<limits>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;

  int arr[n+1];
  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }
  arr[n] = std::numeric_limits<int>::max();
  int max= 0, count = 0;
  for(int i = 0; i < n; i++){
    count++;
    max = count > max ? count : max;
    if(arr[i] > arr[i+1]){
      count = 0;
    }
  }
  cout<<max<<endl;

}
