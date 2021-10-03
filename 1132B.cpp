#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  int arr[n];
  long long sum = 0;
  for(int i = 0; i < n; i++){
    cin>>arr[i];
    sum += arr[i];
  }

  sort(arr, arr+n, greater<int>());

  int m;
  cin>>m;
  int q;
  for(int i = 0; i < m; i++){
    cin>>q;
    cout<<(sum - arr[q - 1])<<'\n';
  }

}
