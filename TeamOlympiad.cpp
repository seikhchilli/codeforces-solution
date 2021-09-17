#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  int count1 = 0, count2 = 0, count3 = 0, min, one[n], two[n], three[n];
  for(int i = 0; i < n; i++){
    cin>>arr[i];
    if(arr[i] == 1){
      one[count1] = i + 1;
      count1++;
    }
    else if(arr[i] == 2){
      two[count2] = i + 1;
      count2++;
    }
    else{
      three[count3] = i + 1;
      count3++;
    }
    min = 10000;
    if(min > count1){
      min = count1;
    }
    if(min > count2){
      min = count2;
    }
    if(min > count3){
      min = count3;
    }
  }
  cout<<min<<endl;
  for(int i = 0; i < min; i++){
    cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
  }


}
