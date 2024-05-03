#include<bits/stdc++.h>
using namespace std;

void startPos(int *a, int *b, int n, int m, int arr[n][]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(arr[i][j] == 'B'){
        *a = i;
        *b = j;
        return;
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin>>n>>m;

  int arr[n][m];

  for(int i = 0; i< n; i++){
    for(int j = 0; j < m; j++){
      cin>>arr[n][m];
    }
  }
  int a, b;

  startPos(&a, &b, n, m, &arr);
  int a1, b1;
  int i = a;
  for(i = a; i < n; i++){
    if(arr[i][b] == 'W'){
      break;
    }
  }
  a1 = i+1;
  int j = b;
  for(j = b; j < m; j++){
    if(arr[a][j] == 'W'){
      break;
    }
  }
  b1 = j+1;
  a++;
  b++;
  cout<<((a + a1)/2)<<" "<<((b + b1)/2)<<endl;

}
