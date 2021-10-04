#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  int arr[n], score = 0;
  for(int i = 0; i < n; i++){
    cin>>arr[i];
    score += arr[i];
  }
  int req_score = ceil(4.5 * n) - score;
  sort(arr, arr+n);
  int i = 0;
  while(req_score > 0){
    req_score -= 5 - arr[i];
    i++;
  }
  cout<<i;
}
