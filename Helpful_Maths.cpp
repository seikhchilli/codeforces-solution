#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  string s1;
  cin>>s1;
  char arr[s1.size()-1];
  int j = 0;
  for(int i = 0; i < s1.size(); i += 2){
    arr[j]= s1[i];
    j++;
  }
  sort(arr, arr+j);
  for(int k = 0; k < j; k++){
    if(k == j-1){
      cout<<arr[k];
    }
    else{
      cout<<arr[k]<<"+";

    }
  }

  return 0;
}
