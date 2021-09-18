#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  int a, b, area;
  while(t--){
    cin >> a >> b;
    if(b <= a){
      if(2 * b < a){
        area = a * a;
      }
      else{
        area = 4 * b * b;
      }
    }
    else{
      if(2 * a < b){
        area = b * b;
      }
      else{
        area = 4 * a * a;
      }
    }
    cout << area << endl;
  }
  return 0;
}
