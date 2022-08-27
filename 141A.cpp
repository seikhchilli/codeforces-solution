#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  string s1, s2, s3, s4;
  cin>>s1>>s2>>s3;
  s4 = s1 + s2;
  if(s4.size() != s3.size()){
    cout<<"NO";
    return 0;
  }
  else{
    sort(s3.begin(), s3.end());
    sort(s4.begin(), s4.end());
    if(s3 != s4){
      cout<<"NO";
      return 0;
    }
    else{
      cout<<"YES";
      return 0;
    }
  }

}
