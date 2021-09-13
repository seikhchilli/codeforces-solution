#include<iostream>
using namespace std;

int main(){
  int n, m;
  cin>>n;
  cin>>m;
  for(int i = 0; i < n; i++){
    if(i % 2 == 0){
      for(int j = 0; j < m; j++){
        cout<<"#";
      }
      cout<<endl;
      continue;
    }
    else{

      if((i - 1) % 4 == 0){
        for(int j = 0; j < m-1; j++){
          cout<<".";
        }
        cout<<"#";
        cout<<endl;
        continue;
      }
      else{
        cout<<"#";
        for(int j = 0; j < m-1; j++){
          cout<<".";
        }
        cout<<endl;
        continue;
      }
    }
  }
}
