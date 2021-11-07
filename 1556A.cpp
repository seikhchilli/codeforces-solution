#include<iostream>
using namespace std;

int main(){
  int n, p, q, count;
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>p;
    cin>>q;
    if((p+q)%2 != 0){
      cout<<-1<<endl;
    }
    else if(p == 0 && q == 0){
      cout<<0<<endl;
    }
    else if(p == q){
      cout<<1<<endl;
    }
    else{
      cout<<2<<endl;

    }

  }
  return 0;
}
