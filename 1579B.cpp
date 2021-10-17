#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'
#define debug(n) cout<<(n)<<endl;
const ll INF = 2e18 + 99;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }

    int brr[n][3];
    int k = 0;
    for(int i = 1; i < n; i++){
      int key = arr[i];
      if(arr[i] < arr[i-1]){
        int j = i - 1;
        int count = 0;
        while(arr[j] > key && j >= 0){
          count++;
          arr[j + 1] = arr[j];
          j--;
        }
        arr[j + 1] = key;
        brr[k][0] = i + 1;
        brr[k][1] = j + 2;
        brr[k][2] = count;
        k++;
      }

    }
    cout<<k<<endl;
    for(int i = 0; i < k; i++){
      cout<<brr[i][1]<<" "<<brr[i][0]<<" "<<brr[i][2]<<endl;
    }
  }

}
