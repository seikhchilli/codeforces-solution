#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  cin>>n>>m;

  multimap <int, int, greater<int>> marr;
  int x, y;
  for(int i = 0; i < m; i++){
    cin>>x>>y;
    marr.insert(pair <int, int> (y, x));

  }

  multimap <int, int> :: iterator itr;
int count = 0, sum = 0;
for (itr = marr.begin(); itr != marr.end(); ++itr)
{
    count += itr->second;
    if(count >= n){
        itr->second = itr->second - (count - n);
        sum += itr->first * itr->second;
        break;
    }
    sum += itr->first * itr->second;


}
cout <<sum<< endl;

}
