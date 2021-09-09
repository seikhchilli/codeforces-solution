#include<iostream>
#include<string>
using namespace std;

int fun(string s, int n){
  int *all_win, *one_win;
  *all_win = new int;
  *one_win = new int;
  int l = 0, k = 0;
  for(int i = 0; i < n;i++){
    if(s[i] == 1){
      *(all_win + k) = i;
      k++;
    }
    else{
      *(one_win + l) = i;
      l++;
    }
  }
  int arr[n][n];
  for(int i = 0; i < k; i++){
    for(int j = 0; j < n; j++){
      arr[all_win[i]][j] = 1;
      arr[j][all_win[i]] = -1;
    }
  }
}

int main(){
  int t, n;
  string s;
  cin>>t;
  for(int i = 0; i < t; i++){
    cin>>n;
    cin>>s;
    fun(s, n);

  }
}
