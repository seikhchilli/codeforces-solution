#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  cin>>n;
  string s;
  int count = 0;
  for(int i = 0; i < n; i++){
    cin>>s;
    if(s == "Tetrahedron"){
      count += 4;
      continue;
    }
    else if(s == "Cube"){
      count += 6;
      continue;
    }
    else if(s == "Octahedron"){
      count += 8;
      continue;
    }
    else if(s == "Dodecahedron"){
      count += 12;
      continue;
    }
    else{
      count += 20;
      continue;
    }
  }
  cout<<count;
  return 0;
}
