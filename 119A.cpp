#include <iostream>
using namespace std;
int gcd(int a,int b){
    return a?gcd(b%a,a):b;
}
int main() {
    int a,b,n;
    cin>>a>>b>>n;
    int flag1=0;
    int val;
 //   cout<<gcd(3,9);
    while(n>0){
        if(flag1==0){
            // this is for simon
           val=gcd(a,n);
           n-=val;
           flag1=1;
        }else{
            // this is for the antisimon
           val=gcd(b,n);
           n-=val;
           flag1=0;
        }
       // cout<<n<<" ";
    }
    if(flag1==1){
        cout<<"0";
    }else{
        cout<<"1";
    }
	return 0;
}
