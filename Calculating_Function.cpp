#include<iostream>
using namespace std;

int main(){
  long long n;
  cin>>n;
  long long evn = n/2;
  long long oddn = n%2 == 0 ? n/2 : (n/2 + 1);
  long long sumevn = evn * (evn + 1);
  long long sumoddn = oddn * oddn;
  long long sum = sumevn - sumoddn;
  cout<<sum;
  return 0;
}
