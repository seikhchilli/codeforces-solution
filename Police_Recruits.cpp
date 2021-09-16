#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int x, pcnt = 0, ccnt = 0;
  while(n--){
    cin>>x;
    if(x == -1 && pcnt == 0){
      ccnt++;
      continue;
    }
    else if(x == -1 && pcnt > 0){
      pcnt--;
      continue;
    }
    else{
      pcnt += x;
    }
  }
  cout<<ccnt<<endl;
}
