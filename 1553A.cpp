#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x;
    int n;
    for(int i = 0; i < t; i++){
        cin>>n;
        n += 1;
        x = n / 10;
        cout<<x<<endl;
    }
    return 0;
}