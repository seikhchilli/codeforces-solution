#include<iostream>
#include<iterator>
#include<set>
using namespace std;

int main(){
  int n, p, q;
  cin>>n;
  cin>>p;
  int x;
  set<int, less<int> > s;
  for(int i = 0; i < p; i++){
    cin>>x;
    s.insert(x);
  }
  cin>>q;
  for(int i = 0; i < q; i++){
    cin>>x;
    s.insert(x);
  }

  int check = s.size() == n ? 1 : 0;
  if(check == 1){
    cout<<"I become the guy.";
  }
  else{
    cout<<"Oh, my keyboard!";
  }
  return 0;

}
