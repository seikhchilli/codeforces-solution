#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;
  int x, minindex, maxindex, maxi = 0, mini = 1000;
  for(int i = 0; i < n; i++){
    cin>>x;
    if(x > maxi){
      maxindex = i;
      maxi = x;
    }
    if(x <= mini){
      minindex = i;
      mini = x;
    }
  }

  if(maxindex>minindex){
	cout<<(maxindex-1)+(n-minindex)-1;
}
else{
	cout<<(maxindex-1)+(n-minindex);

}

}
