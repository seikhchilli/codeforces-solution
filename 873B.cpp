#include<iostream>
#include<string>
using namespace std;

int fun(string s, int n){
  int a = 0, b = 0;
  if(n==1){
    cout<<-1<<" ";
    cout<<-1<<endl;
    return 0;
  }
  for(int r = n-1; r > 0; r--){
      for(int l = 0; l < r; l++){
        for(int i = l; i <= r; i++){
          if(s[i] == 'a'){
            a++;
          }
          else{
            b++;
          }
        }
        if(a == b){
          cout<<(l+1)<<" ";
          cout<<(r+1)<<endl;
          return 0;
        }
        a = 0; b = 0;
      }
  }
  cout<<-1<<" ";
  cout<<-1<<endl;
  return 0;
}

int main(){
  int t, n;
  cin>>t;
  string s;
  for(int j = 0; j < t; j++){
    cin>>n;

    cin>>s;

    fun(s, n);

  }
}
