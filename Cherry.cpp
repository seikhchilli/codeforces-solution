#include<iostream>
#include<algorithm>
#define int long long int
using namespace std;

int32_t main(){
    int t;
    cin >> t;
 
   
    for(int i = 0; i < t; i++){
        int n;
        int product;
        int *highest;
        int *lowest;
        int result = 0;
        cin>>n;
        int array[n];
         
        for(int j = 0; j < n; j++){
            cin>>array[j];
        }
        for(int l = 0; l < n-1; l++){
            for(int r = l+1; r < n; r++ ){
                highest = max_element(array+l, array+r+1); 
                lowest = min_element(array+l, array+r+1);
                product = (*highest * *lowest);
                result = result >= product ? result : product;
                 
            }
        }
        cout<<result<<endl;

    }
    return 0;
}