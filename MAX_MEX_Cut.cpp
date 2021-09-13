#include<iostream>
#include<string>
using namespace std;

int main(){
  int t;
  cin>>t;
  string s1, s2;
  int n, j, count;
  for(int i = 0; i < t; i++){
    cin>>n;
    cin>>s1;
    cin>>s2;
    j = 0;
    count = 0;
    while(j < n){
      if((s1[j] == '0' && s2[j] == '1') || (s2[j] == '0' && s1[j] == '1')){
        count += 2;
        j++;
        continue;
      }
      else if(s1[j] == '0' && s2[j] == '0'){
        if(s1[j+1] == '1' && s2[j+1] == '1' && j != n-1){
          count += 2;
          j += 2;
          continue;
        }
        else{
          count += 1;
          j++;
          continue;
        }
      }
      else{
        if(s1[j+1] == '0' && s2[j+1] == '0' && j != n-1){
          count += 2;
          j += 2;
          continue;
        }
        else{
          j++;
          continue;
        }
      }
    }
    cout<<count<<endl;

  }
}
