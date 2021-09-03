#include<iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  int l, r, rem[t];

  for(int i = 0; i < t; i++){
    cin>>l;
    cin>>r;

    if(r/2 <= l){
      rem[i] = r%l;
    }
    else{
      rem[i] = r%((r/2)+1);
    }

  }

  for(int i = 0; i < t; i++){
    cout<<rem[i]<<endl;
  }
  return 0;
}
